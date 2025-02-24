/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:38:46 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 18:07:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void): AForm("default", 72, 45), target_("defaultTarget")  {
    std::cout << "RobotomyRequestForm: default constructor called" << std::endl;    
};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &arobotresquestform) {
    std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;    
    this->target_ = arobotresquestform.target_;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &arobotresquestform) {
    std::cout << "RobotomyRequestForm: assignement operator called" << std::endl;
    this->target_ = arobotresquestform.target_;
    return (*this);
};
RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << RED << "RobotomyRequestForm: destructor called" << RESET << std::endl;    
};

RobotomyRequestForm::RobotomyRequestForm(const std::string target): 
    AForm("RobotomyRequestForm", 72,45), target_(target) {
        std::cout << "RobotomyRequestForm: Named Target constructor" << std::endl;
};

std::string RobotomyRequestForm::getTarget(void) const { return(this->target_);};

void RobotomyRequestForm::execute(Bureaucrat const &abureaucrat) const {

    std::srand(std::time(0));

    int randomNumber = std::rand();

    if (this->getSignature()) {

        if (abureaucrat.getGrade() <= 45) {

            std::cout << "Drillllllll drilllliiing #***#! vrrrrrrrrrr" << std::endl;

            if(randomNumber %2 == 0) {

                std::cout << this->target_ << " has been robotomized successfully 50% of the time" << std::endl;
            } else {
            
                std::cout << this->target_ << " the robotomy failed." << std::endl;
            }
        } else
            throw std::logic_error("Error: RobotomyRequestForm: Bureaucrat grade to execute too low");
    }
    else
        throw std::logic_error("Error: RobotomyRequestForm not signed");
};
