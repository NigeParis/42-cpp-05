/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:23:18 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/14 16:21:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>


class Form {

    public:

        Form(void);        
        Form(Form &form);
        Form &operator=(Form &form);
        ~Form(void);        

        void GradeTooHighException(int grade) const;
        void GradeTooLowException(int grade) const;
        beSigned(Bureaucrat &abureaucrat);

    private:

        std::string name;        
        bool signature;
        const int gradeToSign;
        const int gradeToExecute;
        
};