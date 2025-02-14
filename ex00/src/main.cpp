/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/14 15:02:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"


int main( void ) {

    std::cout << BLUE << "test 0 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test1("tooHigh", 0);
        std::cout << test1 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }

    std::cout << BLUE << "test 1 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test1("tooLow", 151);
        std::cout << test1 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }


    std::cout << BLUE << "test 2 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test("mamoud", 150);
        Bureaucrat test2 = test;
        std::cout << test2 << std::endl; 
        test2.decrementGrade();
        std::cout << test2 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }

    std::cout << BLUE << "test 3 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test("thomas", 149);
        Bureaucrat test2 = test;
        std::cout << test2 << std::endl; 
        test2.decrementGrade();
        std::cout << test2 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }

    std::cout << BLUE << "test 4 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test("mamoud", 150);
        Bureaucrat test2 = test;
        std::cout << test2 << std::endl; 
        test2.incrementGrade();
        std::cout << test2 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }
    
    std::cout << BLUE << "test 5 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test("thomas", 1);
        Bureaucrat test2 = test;
        std::cout << test2 << std::endl; 
        test2.incrementGrade();
        std::cout << test2 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }
    
    std::cout << BLUE << "test 6 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test("thomas", 2);
        Bureaucrat test2 = test;
        std::cout << test2 << std::endl; 
        test2.incrementGrade();
        std::cout << test2 << std::endl; 
        
    }
    catch(std::exception &e ) {
    
        std::cout << "Error" << e.what() << std::endl;   
    }

    
    return (0);
}
