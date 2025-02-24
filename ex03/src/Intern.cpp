/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:54:36 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 14:24:05 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/Intern.hpp"

Intern::Intern(void) {
    std::cout << "default makeForm" << std::endl;
};

Intern::Intern(Intern const &other) {
    std::cout << "makeForm copy constructor called" << std::endl;
    *this = other;
};

Intern &Intern::operator=(Intern const &other) {
    
    std::cout << "makeForm copy assignement called" << std::endl;
    (void) other;
    return (*this);
};

Intern::~Intern(void) {
    std::cout << "makeForm destructor called" << std::endl;
};

AForm* Intern::makeForm(std::string const formName, std::string const targetForm) {

    std::cout << targetForm << std::endl;
    return(new PresidentialPardonForm(formName));
            
};