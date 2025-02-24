/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:54:36 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 17:31:21 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/Intern.hpp"

enum FORMTYPE {

    PRESIDENTIALPARDONFORM,
    SHRUBBERYCREATIONFORM,
    ROBOTOMYREQUESTFORM
};


// helper function for the switch in makeForm()
static int WhichForm(std::string targetName){

    if (targetName == "PresidentialPardonForm")
        return(PRESIDENTIALPARDONFORM);
    if (targetName == "ShrubberyCreationForm")
        return(SHRUBBERYCREATIONFORM);
    if (targetName == "RobotomyRequestForm")
        return(ROBOTOMYREQUESTFORM);
    return -1;      
};



Intern::Intern(void) {
    std::cout << "Intern: default constructor" << std::endl;
};

Intern::Intern(Intern const &other) {
    std::cout << "Intern: copy constructor called" << std::endl;
    *this = other;
};

Intern &Intern::operator=(Intern const &other) {
    
    std::cout << "Intern: copy assignement called" << std::endl;
    (void) other;
    return (*this);
};

Intern::~Intern(void) {
    std::cout << RED << "Intern: destructor called" << RESET << std::endl;
};

AForm* Intern::makeForm(std::string const formName, std::string const targetForm) {


    switch(WhichForm(formName)) {

    case PRESIDENTIALPARDONFORM:
        std::cout << YELLOW << "Intern creates " << formName << RESET << std::endl;
        return(new PresidentialPardonForm(targetForm));
  
    case SHRUBBERYCREATIONFORM:
    std::cout << YELLOW << "Intern creates " << formName << RESET << std::endl;
    return(new ShrubberyCreationForm(targetForm));

    case ROBOTOMYREQUESTFORM:
    std::cout << YELLOW << "Intern creates " << formName << RESET << std::endl;
    return(new RobotomyRequestForm(targetForm));

    default:
        throw std::logic_error("Error: parameter target form not found");
    }
    throw std::logic_error("Error: makeForm function");
};