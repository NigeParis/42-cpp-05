/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:23:18 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 13:43:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:

        Form(void);        
        Form(Form &form);
        Form &operator=(Form &form);
        ~Form(void);        
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        void GradeTooHighException(int grade) const;
        void GradeTooLowException(int grade) const;
        void beSigned(Bureaucrat &abureaucrat);
        std::string getName(void) const;
        bool getSignature(void) const;
        int getGradToSign(void) const;
        int getGradToExecute(void) const;

    private:

        const std::string name_;        
        bool signature_;
        const int gradeToSign_;
        const int gradeToExecute_;
        
};

std::ostream &operator<<(std::ostream &outputstream, Form &form);
