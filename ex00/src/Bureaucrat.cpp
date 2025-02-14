/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:00:35 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/14 15:00:26 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :name("default"), grade(150) {};
Bureaucrat::Bureaucrat(Bureaucrat const &abureaucrat) {
    this->name = abureaucrat.name;
    this->grade = abureaucrat.grade;
};
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &abureaucrat) {
    this->name = abureaucrat.name;
    this->grade = abureaucrat.grade;
    return(*this);
};
Bureaucrat::~Bureaucrat(void) {};

Bureaucrat::Bureaucrat(std::string const name, int const grade) {

    this->name = name;
    GradeTooHighException(grade);
    GradeTooLowException(grade);
    this->grade = grade;     
};
        
void Bureaucrat::GradeTooHighException(int grade) const {

    if (grade < 1)
        throw std::out_of_range(": Grade too high");
};

void Bureaucrat::GradeTooLowException(int grade) const {

    if (grade > 150)
          throw std::out_of_range(": Grade too low");
};

std::string const &Bureaucrat::getName(void) const {return(this->name);};
int const &Bureaucrat::getGrade(void) const {return(this->grade);};

std::ostream &operator<<(std::ostream &outputstream, Bureaucrat &abureaucrat) {

    return outputstream << abureaucrat.getName() << ", bureaucrat grade " << abureaucrat.getGrade();
        
}


void Bureaucrat::incrementGrade(void) {

    std::cout << YELLOW << "incrementGrade called" << RESET <<std::endl;
    GradeTooHighException(this->grade - 1);
    this->grade--;
    
};

void Bureaucrat::decrementGrade(void) {

    std::cout << RED << "decrementGrade called" << RESET <<std::endl;
    GradeTooLowException(this->grade + 1);
    this->grade++;
    
};