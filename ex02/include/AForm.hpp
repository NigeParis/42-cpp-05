/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:23:18 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 13:43:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    public:

        AForm(void);        
        AForm(AForm &Aform);
        AForm &operator=(AForm &Aform);
        virtual ~AForm(void);        
        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        void GradeTooHighException(int grade) const;
        void GradeTooLowException(int grade) const;
        void beSigned(Bureaucrat &abureaucrat);
        std::string getName(void) const;
        bool getSignature(void) const;
        int getGradToSign(void) const;
        int getGradToExecute(void) const;
        virtual void execute(Bureaucrat const &abureaucrat) const = 0;
        virtual std::string getTarget(void) const = 0;


    private:

        const std::string name_;        
        bool signature_;
        const int gradeToSign_;
        const int gradeToExecute_;
        
};

std::ostream &operator<<(std::ostream &outputstream, AForm &Aform);
