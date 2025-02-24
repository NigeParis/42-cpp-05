/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:40:41 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 14:23:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"


class Intern {


    public:

        Intern(void);
        Intern(Intern const &intern);
        Intern &operator=(Intern const &intern);
        ~Intern(void);
        AForm* makeForm(std::string const formName, std::string const targetForm);

};

