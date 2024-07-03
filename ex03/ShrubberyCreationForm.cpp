/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:16:45 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/03 03:56:59 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if(this == &src)
		return *this;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw AForm::GradeTooLowException();

	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	action();
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file)
	{
		std::cerr << "Failed to create file: " + _target + "_shrubbery" << std::endl;
		throw std::runtime_error("Failed to create file: " + _target + "_shrubbery");
	}
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
			"  ______/____\\____"
		 << std::endl;
	if (!file)
	{
		std::cerr << "Failed to write to file: " + _target + "_shrubbery" << std::endl;
		throw std::runtime_error("Failed to write to file: " + _target + "_shrubbery");
	}
}
