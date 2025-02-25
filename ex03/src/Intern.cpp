/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:54:36 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 16:53:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/Intern.hpp"

// helper function for the switch in makeForm()
int WhichForm(std::string const& formName) {
    std::string names[3] = {
        "presidential pardon", 
        "robotomy request",
        "shrubbery creation" 
    };
    for (int i = 0; i < 3; ++i) {
        if (formName == names[i]) return i;
    }
    return -1;
}

// int WhichForm(std::string const& formName) {
//     std::string names[3] = {
//         "presidential pardon", 
//         "robotomy request",
//         "shrubbery creation" 
//     };
//     for (int i = 0; i < 3; ++i) 
//         if (formName == names[i]) return i;
//     throw std::logic_error("Error: parameter target form not found");
// }




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

AForm* Intern::CreatePresidentialPardonForm(std::string const& target) {
    return new PresidentialPardonForm(target);
};

AForm* Intern::CreateRobotomyRequestForm(std::string const& target) {
    return new RobotomyRequestForm(target);
};

AForm* Intern::CreateShrubberyCreationForm(std::string const& target) {
    return new ShrubberyCreationForm(target);
};

AForm* Intern::makeForm(std::string const formName, std::string const targetForm) {

    typedef AForm* (FormCreator)(std::string const&);
    int funcsNbr;
    FormCreator *funcs[3] = {
        
        &Intern::CreatePresidentialPardonForm,
        &Intern::CreateRobotomyRequestForm,
        &Intern::CreateShrubberyCreationForm        
    };
    
    funcsNbr = WhichForm(formName);
    if (funcsNbr == -1)
         throw std::logic_error("Error: parameter target form not found");
    
    std::cout << YELLOW << "Intern creates " << formName << RESET << std::endl;
    return((*funcs[funcsNbr])(targetForm));

};


// AForm* Intern::makeForm(std::string const formName, std::string const targetForm) {

//     typedef AForm* (FormCreator)(std::string const&);
//     FormCreator *funcs[3] = {
        
//         &Intern::CreatePresidentialPardonForm,
//         &Intern::CreateRobotomyRequestForm,
//         &Intern::CreateShrubberyCreationForm        
//     };
//     return((*funcs[WhichForm(formName)])(targetForm));
// };
