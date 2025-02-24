/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:03:21 by nrobinso          #+#    #+#             */
/*   Updated: 2025/02/24 18:07:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("default", 145, 137), target_("defaultTarget") {
    std::cout << "default ShrubberyCreationForm constructor" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &ashrubberycreationform) {
    this->target_ = ashrubberycreationform.target_;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &ashrubberycreationform) {
    std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
    this->target_ = ashrubberycreationform.target_;
    return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): 
    AForm("ShrubberyCreationForm", 145,137), target_(target) {
        std::cout << "Named Target ShrubberyCreationForm constructor" << std::endl;
};

std::string ShrubberyCreationForm::getTarget(void) const { return(this->target_);};

void ShrubberyCreationForm::execute(Bureaucrat const &abureaucrat) const {

    if (this->getSignature()) {

        if (abureaucrat.getGrade() <= 137) {
    
            std::string filename = this->target_ + "_shrubbery";
            std::fstream file(filename.c_str(), std::ios::out);
            if (file.is_open()) {
                
                file << "              _{* _{*{*/}/}/}__\n";
                file << "             {/{/*}{/{/*}(*}{/*} _\n";
                file << "            {/{/*}{/{/*}(_)*}{/{/*}  _\n";
                file << "         {*{/(*}*}{/{/*}*}{/){/*}*} /*}\n";
                file << "        {/{/(_)/}{*{/)*}{*(_){/}/}/}/}\n";
                file << "       _{*{/{/{*{/{/(_)/}/}/}{*(/}/}/}\n";
                file << "      {/{/{*{*{*(/}{*{*/}/}{*}(_){*/}*}\n";
                file << "      _{*{/{*{/(_)*}/}{/{/{/*}*})*}{/*}\n";
                file << "     {/{/{*{*(/}{/{*{*{*/})/}{*(_)/}/}*}\n";
                file << "      {*{*/}(_){*{*{*/}/}(_){*/}{*/}/})/}\n";
                file << "       {/{*{*/}{/{*{*{*/}/}{*{*/}/}*}(_)\n";
                file << "      {/{*{*/}{/){*{*{*/}/}{*{*(/}/}*}/}\n";
                file << "       {/{*{*/}(_){*{*{*(/}/}{*(_)/}/}*}\n";
                file << "         {/({/{*{/{*{*/}(_){*/}/}*}/}(*}\n";
                file << "          (_){/{*/}{*{*/}/}{*{*)/}/}(_)\n";
                file << "            {/{/{*{*/}{/{*{*{*(_)/}\n";
                file << "             {/{*{*{*/}/}{*{*}/}\n";
                file << "              {){/ {*/}{*/} *}*}\n";
                file << "              (_)  *.-'.-/\n";
                file << "          __...--- |'-.-'| --...__\n";
                file << "   _...--   .-'    |'-.-'|  ' -.   --.\n";
                file << " -    ' .  . '     |.'-._| '  . .  '  \n";
                file << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
                file << "          ' ..     |'-_.-|\n";
                file << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
                file << "              .'   |'- .-|   '.\n";
                file << "  ..-'   ' .  '.   `-._.-   .'  '  - .\n";
                file << "   .-' '        '-._______.-'     '  .\n";
                file << "        .      ~,\n";
                file.close();
                std::cout << "File created successfully" << std::endl;
            } else 
                throw std::logic_error("Error: file not created");

        } else
            throw std::logic_error("Error: ShrubberyCreationForm: Bureaucrat grade to execute too low");
    }
    else
        throw std::logic_error("Error: ShrubberyCreationForm not signed");
};
