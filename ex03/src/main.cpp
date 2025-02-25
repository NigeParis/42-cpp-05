/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 13:33:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/AForm.hpp"
#include "./include/Intern.hpp"

int main( void ) {

    std::cout << BLUE << "test 1 : PresidentialPardonForm  init values ------------------------------" 
    << RESET << std::endl;
    AForm *form1 = NULL; 
    try {  

        Intern SomeOneRandom;
        Bureaucrat Thomas("Thomas", 5);
        std::cout << Thomas << std::endl;
        form1 = SomeOneRandom.makeForm("presidential pardon", "Bender");
        std::cout << PINK << *form1 << RESET << std::endl; 
        Thomas.signForm(*form1);
        std::cout << YELLOW << *form1 << RESET << std::endl; 
        Thomas.executeForm(*form1); 
        delete(form1);
    }
    catch(std::exception &e ) {
        delete(form1);
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << BLUE << "test 2 : Shurubbery  init values ------------------------------" 
    << RESET << std::endl;
    AForm *form2 = NULL; 
    try {  

        Intern SomeOneRandom;
        Bureaucrat Nigel("Nigel", 5);
        std::cout << Nigel << std::endl;
        form2 = SomeOneRandom.makeForm("shrubbery creation", "testTreeForm");
        std::cout << PINK << *form2 << RESET << std::endl; 
        Nigel.signForm(*form2);
        std::cout << YELLOW << *form2 << RESET << std::endl;
        Nigel.executeForm(*form2); 
        delete(form2);
    }
    catch(std::exception &e ) {
        delete(form2);
        std::cerr << e.what() << std::endl;   
    }
    
    std::cout << BLUE 
    << "test 3 : RobotomyRequestForm  init values ------------------------------" << RESET << std::endl;
    AForm *form3 = NULL; 
    try {  
        Intern SomeOneRandom;
        Bureaucrat Thomas("Thomas", 45);
        std::cout << Thomas << std::endl;
        form3 = SomeOneRandom.makeForm("robotomy request", "BigRobot");
        std::cout << PINK << *form3 << RESET << std::endl; 
        Thomas.signForm(*form3);
        std::cout << YELLOW << *form3 << RESET << std::endl;
        Thomas.executeForm(*form3); 
        delete(form3);
    }
    catch(std::exception &e ) {
        delete form3;
        std::cerr << e.what() << std::endl;   
    }
    return (0);
}
