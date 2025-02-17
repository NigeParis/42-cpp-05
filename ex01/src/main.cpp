/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/17 18:03:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Form.hpp"


int main( void ) {

    std::cout << BLUE << "test 0 : ----------------------------------------" << RESET << std::endl;

    try {
        
        Bureaucrat test1("Thomas", 1);
        Bureaucrat test2("Alex", 12);
        std::cout << test1 << std::endl; 
        Form form("Form_!", 0, 150);

        test1.signForm(form);
        test1.signForm(form);
        test2.signForm(form);

        std::cout << form << std::endl;

    }
    catch(std::exception &e ) {
    
        std::string str = e.what();


        if(str.compare(": Form Grade too high") == 0)
            std::cout << "Form Error:" << e.what() << std::endl;
        else   
            std::cout << "Error" << e.what() << std::endl;   
    }


    
    return (0);
}
