/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:26:02 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 18:37:11 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public AForm {

    public:

    RobotomyRequestForm(void);
    RobotomyRequestForm(RobotomyRequestForm &arobotresquestform);
    RobotomyRequestForm &operator=(RobotomyRequestForm &arobotresquestform);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string target);
    
    virtual void execute(Bureaucrat const &abureaucrat) const;
    virtual std::string getTarget(void) const;

    
    private:
    
        std::string target_;      
};
