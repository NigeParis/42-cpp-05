/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:52:11 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/19 14:51:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {


    public:

        ShrubberyCreationForm(void);
        ShrubberyCreationForm(ShrubberyCreationForm &ashrubberycreationform);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &ashrubberycreationform);
        ~ShrubberyCreationForm(void);
        
        ShrubberyCreationForm(const std::string target);

        virtual void execute(Bureaucrat const &abureaucrat) const;
        virtual std::string getTarget(void) const;

    private:

        std::string target_;

};
