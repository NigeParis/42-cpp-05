/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 09:33:45 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/AForm.hpp"


int main( void ) {


    std::cout << BLUE << "test 1 : Presidential  init values --Grade too low to execute---" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 6);
        std::cout << Thomas << std::endl;
        PresidentialPardonForm form2("Form one");
        std::cout << PINK << form2 << RESET << std::endl; 
        Thomas.signForm(form2);
        std::cout << YELLOW << form2 << RESET << std::endl; 
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << RED << e.what() << RESET << std::endl;   
    }
    
    std::cout << BLUE << "test 2 : Presidential  init values -----------------------------" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 5);
        std::cout << Thomas << std::endl;
        PresidentialPardonForm form2("Form one");
        std::cout << PINK << form2 << RESET << std::endl; 
        Thomas.signForm(form2);
        std::cout << YELLOW << form2 << RESET << std::endl; 
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << RED << e.what() << RESET << std::endl;   
    }

    

    std::cout << BLUE << "test 3 : Shrubbery  init values --Grade too low to execute---" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 6);
        std::cout << Thomas << std::endl;
        ShrubberyCreationForm form2("Form one");
        std::cout << PINK << form2 << RESET << std::endl; 
        Thomas.signForm(form2);
        std::cout << YELLOW << form2 << RESET << std::endl; 
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << RED << e.what() << RESET << std::endl;   
    }
    
    std::cout << BLUE << "test 4 : Shrubbery  init values --Grade too low to execute---" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 5);
        std::cout << Thomas << std::endl;
        ShrubberyCreationForm form2("Form one");
        std::cout << PINK << form2 << RESET << std::endl; 
        Thomas.signForm(form2);
        std::cout << YELLOW << form2 << RESET << std::endl; 
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << RED << e.what() << RESET << std::endl;   
    }

   
    
    std::cout << BLUE << "test 5 : Robotomy  init values --Grade too low to execute---" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 6);
        std::cout << Thomas << std::endl;
        RobotomyRequestForm form2("Form one");
        std::cout << PINK << form2 << RESET << std::endl; 
        Thomas.signForm(form2);
        std::cout << YELLOW << form2 << RESET << std::endl; 
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << RED << e.what() << RESET << std::endl;   
    }
    
    std::cout << BLUE << "test 6 : Robotomy  init values --Grade too low to execute---" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 5);
        std::cout << Thomas << std::endl;
        RobotomyRequestForm form2("Form one");
        std::cout << PINK << form2 << RESET << std::endl; 
        Thomas.signForm(form2);
        std::cout << YELLOW << form2 << RESET << std::endl; 
        Thomas.executeForm(form2); 
    }
    catch(std::exception &e ) {
        std::cerr << RED << e.what() << RESET << std::endl;   
    }

    
    return (0);
}
