/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:05:19 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 13:59:20 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Form.hpp"

Form::Form(void): name_("default"),signature_(false),gradeToSign_(150), gradeToExecute_(150){
    std::cout << "default form constructor" << std::endl;
};        

Form::Form(Form &form): name_(form.name_),signature_(false),gradeToSign_(form.gradeToSign_), gradeToExecute_(form.gradeToExecute_) {
    std::cout << "form copy constructor" << std::endl;
};

Form &Form::operator=(Form &form) {
            
    std::cout << "copy assignement form constructor" << std::endl;
    this->signature_ = form.signature_;
    return (*this);
};

Form::~Form(void) {
    std::cout << "Form: " << this->name_ << " destructor" << std::endl;
};     

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute): name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute) {
   
    std::cout << "initialised form constructor" << std::endl;
    this->signature_ = false;
    GradeTooHighException(gradeToSign);
    GradeTooHighException(gradeToExecute);
    GradeTooLowException(gradeToSign);
    GradeTooLowException(gradeToExecute);
};
        
void Form::GradeTooHighException(int grade) const {
    if (grade < 1)
        throw std::out_of_range(": Form Grade too high");
};

void Form::GradeTooLowException(int grade) const {
    if (grade > 150)
        throw std::out_of_range(": Form Grade too low");
};

void Form::beSigned(Bureaucrat &abureaucrat) {

    if(this->getSignature() == false) {
        if ((abureaucrat.getGrade() <= this->gradeToSign_) && abureaucrat.getGrade() <= this->gradeToExecute_) {
            this->signature_ = true;
            std::cout << abureaucrat.getName() << " signed " << this->name_ << std::endl;
        } else {
            std::string message = (abureaucrat.getName() + " couldn't sign " + this->getName() + " because grade to sign too low");
            throw std::logic_error(message);
        }
    } else {
        std::string message = (abureaucrat.getName() + " couldn't sign " + this->getName() + " because already signed");
        throw std::logic_error(message);
    }
};

std::string Form::getName(void) const {return(this->name_);};
bool Form::getSignature(void) const {return (this->signature_);};
int Form::getGradToSign(void) const {return(this->gradeToSign_);};
int Form::getGradToExecute(void) const {return(this->gradeToExecute_);};

std::ostream &operator<<(std::ostream &outputstream, Form &form) {

    return outputstream 
    << "Form name............ : " << form.getName() << std::endl 
    << "Form signed.......... : " << form.getSignature() << std::endl
    << "Form Grade to Sign... : " << form.getGradToSign() << std::endl
    << "Form Grade to Execute : " << form.getGradToExecute();        
}
