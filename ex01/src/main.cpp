/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/25 09:28:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Form.hpp"


int main( void ) {

    std::cout << BLUE << "test 0 :  Bureaucrat init good grade ----------------------" << RESET << std::endl;

    try {  
        Bureaucrat test1("Thomas", 10);
        std::cout << PINK << test1 << RESET << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }
    std::cout << BLUE << "test 1 :  Bureaucrat init grade too high -----------------" << RESET << std::endl;
    try {  
        Bureaucrat test1("ThomasHigh", 0);
        std::cout << PINK << test1 << RESET << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }
    std::cout << BLUE << "test 2 :  Bureaucrat init grade too low -----------------" << RESET << std::endl;
    try {  
        Bureaucrat test1("ThomasHigh", 151);
        std::cout << PINK << test1 << RESET << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }

    std::cout << BLUE << "test 3 :  Form init values ------------------------------" << RESET << std::endl;
    try {  

        Form form("Form_name", 2, 130);
        std::cout << PINK << form << RESET << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }
    std::cout << BLUE << "test 4 :  Form init bad values too high -----------------" << RESET << std::endl;
    try {  

        Form form("Form_name", 1, 0);
        std::cout << PINK << form << RESET << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }
    std::cout << BLUE << "test 5 :  Form init bad values too low ------------------" << RESET << std::endl;
    try {  

        Form form("Form_name", 1, 151);
        std::cout << PINK << form << RESET << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }
    std::cout << BLUE << "test 6 :  Form signed by bureaucrat + try to sign again-" << RESET << std::endl;
    try {  

        Bureaucrat Mamoud("Mamoud", 1);
        std::cout << Mamoud << std::endl; 
        Form form("Form_name", 5, 150);
        Mamoud.signForm(form);
        std::cout << PINK << form << RESET << std::endl;
        Mamoud.signForm(form);
         
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }

    std::cout << BLUE << "test 7 :  Form signed by bureaucrat with grade too low-" << RESET << std::endl;
    try {  

        Bureaucrat Mamoud("Mamoud", 6);
        std::cout << Mamoud << std::endl; 
        Form form("Form_name", 15, 1);
        std::cout << PINK << form << RESET << std::endl;
        Mamoud.signForm(form);
        Mamoud.signForm(form);
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }

    

    std::cout << BLUE << "test 8 :  Form signed by bureaucrat increment grade" << RESET << std::endl;
    try {  

        Bureaucrat Mamoud("Mamoud", 6);
        std::cout << Mamoud << std::endl; 
        Form form("Form_name", 10, 1);
        std::cout << PINK << form << RESET << std::endl;
        Mamoud.incrementGrade();
        Mamoud.incrementGrade();
        Mamoud.incrementGrade();
        Mamoud.incrementGrade();
        Mamoud.incrementGrade();
        std::cout << Mamoud << std::endl; 
        Mamoud.signForm(form);
        Mamoud.signForm(form);
    }
    catch(std::exception &e ) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;   
    }

    


    
    return (0);
}
