/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/19 15:16:08 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/AForm.hpp"


int main( void ) {


    std::cout << BLUE << "test 1 : Shurubbery  init values ------------------------------" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 6);
        std::cout << Thomas << std::endl;
        PresidentialPardonForm form2("Form one");
        std::cout << form2 << std::endl; 
        Thomas.signForm(form2);
        std::cout << form2 << std::endl;
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << e.what() << std::endl;   
    }
    
    return (0);
}
