/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:37:20 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/19 14:50:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

    public:

    PresidentialPardonForm(void);        
    PresidentialPardonForm(PresidentialPardonForm &presidentialpardonForm);        
    PresidentialPardonForm &operator=(PresidentialPardonForm &presidentialpardonForm);        
    ~PresidentialPardonForm(void);        
    PresidentialPardonForm(const std::string target);
    
    virtual std::string getTarget(void) const;
    virtual void execute(Bureaucrat const &abureaucrat) const;

    private:

        std::string target_;
    
};
 