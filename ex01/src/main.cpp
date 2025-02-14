/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/14 16:15:39 by nrobinso         ###   ########.fr       */
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


    
    return (0);
}
