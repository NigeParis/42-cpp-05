/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:27:30 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 10:27:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"

#define RED "\033[31m"
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define GREY "\033[30m"
#define YELLOW "\033[33m"
#define LIGHTBLUE "\033[36m"
#define PINK "\033[35m"
#define RESET "\033[0m"

class AForm;


class Bureaucrat {

    public:

        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &abureaucrat);
        Bureaucrat &operator=(Bureaucrat const &abureaucrat);
        ~Bureaucrat(void);

        Bureaucrat(std::string const name, int const grade);
        
        void GradeTooHighException(int grade) const;
        void GradeTooLowException(int grade) const;
        void incrementGrade(void);
        void decrementGrade(void);

        std::string const &getName(void) const;
        int const &getGrade(void) const;
        void setGrade(int grade);
        void signForm(AForm &form);
        void executeForm(AForm const & form);
        

    private:

        const std::string name_;
        int grade_;

        

    
};

std::ostream &operator<<(std::ostream &outputstream, Bureaucrat &abureaucrat);