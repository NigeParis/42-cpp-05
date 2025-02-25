/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:38:46 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 09:35:46 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void): AForm("default", 72, 45), target_("defaultTarget")  {
    std::cout << "default RobotomyRequestForm constructor called" << std::endl;    
};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &arobotresquestform) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;    
    this->target_ = arobotresquestform.target_;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &arobotresquestform) {
    std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
    this->target_ = arobotresquestform.target_;
    return (*this);
};
RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;    
};

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72,45), target_(target) {
    std::cout << "Named Target RobotomyRequestForm constructor" << std::endl;
};

std::string RobotomyRequestForm::getTarget(void) const { return(this->target_);};

void RobotomyRequestForm::execute(Bureaucrat const &abureaucrat) const {

    std::srand(std::time(0));

    int randomNumber = std::rand();

    if (this->getSignature()) {

        if (abureaucrat.getGrade() <= 45) {

            std::cout << GREEN << "Drillllllll drilllliiing #***#! vrrrrrrrrrr" << RESET << std::endl;

            if(randomNumber %2 == 0) {

                std::cout << GREEN << this->target_ <<  " has been robotomized successfully 50% of the time"  << RESET << std::endl;
            }else {
            
                std::cout << GREEN << this->target_ << " the robotomy failed."  << RESET << std::endl;
            }
        } else
            throw std::logic_error("Error: RobotomyRequestForm: Bureaucrat grade to execute too low");
    }
    else
        throw std::logic_error("Error: RobotomyRequestForm not signed");
};
