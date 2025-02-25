/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:05:19 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 14:05:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/AForm.hpp"

AForm::AForm(void): name_("default"),signature_(false),gradeToSign_(150), gradeToExecute_(150) {
    std::cout << "AForm: default constructor" << std::endl;
};   
             
AForm::AForm(AForm &form): name_(form.name_),signature_(false),gradeToSign_(form.gradeToSign_), 
    gradeToExecute_(form.gradeToExecute_) {
        std::cout << "AForm: copy constructor" << std::endl;
};
        
AForm &AForm::operator=(AForm &form) {
            
    std::cout << "AForm: copy assignement form constructor" << std::endl;
    this->signature_ = form.signature_;
    return (*this);
};
        
AForm::~AForm(void) {
    std::cout << RED << "AForm: " << this->name_ << " destructor called" << RESET << std::endl;
};     

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute): name_(name), 
    gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute) {
        std::cout << "AForm: initialised form constructor" << std::endl;
        this->signature_ = false;
        GradeTooHighException(gradeToSign);
        GradeTooHighException(gradeToExecute);
        GradeTooLowException(gradeToSign);
        GradeTooLowException(gradeToExecute);
};

void AForm::GradeTooHighException(int grade) const {
    if (grade < 1)
        throw std::out_of_range(": AForm Grade too high");
};
        
void AForm::GradeTooLowException(int grade) const {
    if (grade > 150)
        throw std::out_of_range(": AForm Grade too low");
};
        
void AForm::beSigned(Bureaucrat &abureaucrat) {

    if(this->getSignature() == false) {
        if (abureaucrat.getGrade() <= this->gradeToSign_) {
            this->signature_ = true;
            std::cout << abureaucrat.getName() << " signed " << this->name_ << std::endl;
        } else {
            std::string message = (abureaucrat.getName() + " couldn't sign " + this->getName() 
                + " because grade to sign too low");
                   throw std::logic_error(message);
        }
    } else {
        std::string message = (abureaucrat.getName() + " couldn't sign " + this->getName() 
            + " because already signed");
                throw std::logic_error(message);
    }
};
        
std::string AForm::getName(void) const {return(this->name_);};
bool AForm::getSignature(void) const {return (this->signature_);};
int AForm::getGradToSign(void) const {return(this->gradeToSign_);};
int AForm::getGradToExecute(void) const {return(this->gradeToExecute_);};

std::ostream &operator<<(std::ostream &outputstream, AForm &form) {

    return outputstream 
    << "AForm type............ : " << form.getName() << std::endl 
    << "AForm signed.......... : " << form.getSignature() << std::endl
    << "AForm Grade to Sign... : " << form.getGradToSign() << std::endl
    << "AForm Grade to Execute : " << form.getGradToExecute() << std::endl
    << "Target................ : " << form.getTarget();
}
