/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:16:45 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/01 18:35:17 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw AForm::GradeTooLowException();

	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	action();
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file(_target + "_shrubbery");
	if(!file)
		throw std::runtime_error("Failed to create file: " + _target + "_shrubbery");
	file << "    oxoxoo    ooxoo\n"
			"  ooxoxo oo  oxoxooo\n"
			" oooo xxoxoo ooo ooox\n"
			" oxo o oxoxo  xoxxoxo\n"
			"  oxo xooxoooo o ooo\n"
			"    ooo\\oo\\  /o/o\n"
			"        \\  \\/ /\n"
			"         |   /\n"
			"         |  |\n"
			"         | D|\n"
			"         |  |\n"
			"         |  |\n"
			"  ______/____\\____" << std::endl;
	file.close();
}
