/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:10:20 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/01 18:49:08 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		Bureaucrat john("John", 50);
		Bureaucrat alice("Alice", 25);
		Bureaucrat bob("Bob", 75);

		ShrubberyCreationForm shrubberyForm("Garden");
		RobotomyRequestForm robotomyForm("Victim");
		PresidentialPardonForm pardonForm("Criminal");

		std::cout << john << std::endl;
		std::cout << alice << std::endl;
		std::cout << bob << std::endl;
		std::cout << shrubberyForm << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << pardonForm << std::endl;

		john.signForm(shrubberyForm);
		john.signForm(robotomyForm);
		john.signForm(pardonForm);

		john.executeForm(shrubberyForm);
		john.executeForm(robotomyForm);
		john.executeForm(pardonForm);

		alice.signForm(robotomyForm);
		bob.signForm(pardonForm);

		alice.executeForm(robotomyForm);
		bob.executeForm(pardonForm);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
