/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:00:35 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 10:21:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :name_("default"), grade_(150) {};
Bureaucrat::Bureaucrat(Bureaucrat const &abureaucrat): name_(abureaucrat.name_) {
    this->grade_ = abureaucrat.grade_;
};
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &abureaucrat) {
    this->grade_ = abureaucrat.grade_;
    return(*this);
};
Bureaucrat::~Bureaucrat(void) {};

Bureaucrat::Bureaucrat(std::string const name, int const grade):  name_(name) {

    GradeTooHighException(grade);
    GradeTooLowException(grade);
    this->grade_ = grade;     
};
        
void Bureaucrat::GradeTooHighException(int grade) const {

    if (grade < 1)
        throw std::out_of_range(": Grade too high");
};

void Bureaucrat::GradeTooLowException(int grade) const {

    if (grade > 150)
          throw std::out_of_range(": Grade too low");
};

std::string const &Bureaucrat::getName(void) const {return(this->name_);};
int const &Bureaucrat::getGrade(void) const {return(this->grade_);};

std::ostream &operator<<(std::ostream &outputstream, Bureaucrat &abureaucrat) {

    return outputstream << abureaucrat.getName() << ", bureaucrat grade " << abureaucrat.getGrade();
        
}


void Bureaucrat::incrementGrade(void) {

    std::cout << YELLOW << "incrementGrade called" << RESET <<std::endl;
    GradeTooHighException(this->grade_ - 1);
    this->grade_--;
    
};

void Bureaucrat::decrementGrade(void) {

    std::cout << RED << "decrementGrade called" << RESET <<std::endl;
    GradeTooLowException(this->grade_ + 1);
    this->grade_++;
    
};