/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/18 17:14:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/AForm.hpp"


int main( void ) {


    std::cout << BLUE << "test 1 : Shurubbery  init values ------------------------------" << RESET << std::endl;
    try {  

        Bureaucrat Thomas("Thomas", 137);
        std::cout << Thomas << std::endl;
        ShrubberyCreationForm form2("Tree_House test");
        ShrubberyCreationForm form = form2;
        Thomas.signForm(form);
        std::cout << form << std::endl; 
        form.execute(Thomas);
    }
    catch(std::exception &e ) {
        std::cout << "Error" << e.what() << std::endl;   
    }


    
    return (0);
}
