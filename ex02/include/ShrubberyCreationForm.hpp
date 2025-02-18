/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:52:11 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/18 16:04:07 by nrobinso         ###   ########.fr       */
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

        void GradeTooHighException(int grade) const;
        void GradeTooLowException(int grade) const;


        
        virtual void execute(Bureaucrat const &abureaucrat) const;


    

    private:

        std::string target_;

    
};
