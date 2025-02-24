/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:53:32 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 18:07:03 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("default", 25, 5), target_("defaultTarget") {
    std::cout << "default PresidentialPardonForm constructor called" << std::endl;    
};        
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidentialpardonForm) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;    
    this->target_ = presidentialpardonForm.target_;
};        
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &presidentialpardonForm) {
    std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
    this->target_ = presidentialpardonForm.target_;
    return (*this);
};        
PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;    
};        
PresidentialPardonForm::PresidentialPardonForm(const std::string target): 
    AForm("PresidentialPardonForm", 25,5), target_(target) {
        std::cout << "Named Target PresidentialPardonForm constructor" << std::endl;
};

std::string PresidentialPardonForm::getTarget(void) const {return(this->target_);};

void PresidentialPardonForm::execute(Bureaucrat const &abureaucrat) const {
    
    if (this->getSignature()) {

        if (abureaucrat.getGrade() <= 5) {

            std::cout << this->target_ << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        } else {
            throw std::logic_error("Error: PresidentialPardonForm: Bureaucrat grade to execute too low");
        }
    }
    else
        throw std::logic_error("Error: PresidentialPardonForm not signed");
};