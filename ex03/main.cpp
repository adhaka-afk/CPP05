/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:10:20 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/02 06:50:39 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern someRandomIntern;
	Bureaucrat bob("Bob", 50);

	AForm *form1 = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form1)
	{
		bob.signForm(*form1);
		bob.executeForm(*form1);
		delete form1;
	}

	AForm *form2 = someRandomIntern.makeForm("presidential pardon", "Fry");
	if (form2)
	{
		bob.signForm(*form2);
		bob.executeForm(*form2);
		delete form2;
	}

	AForm *form3 = someRandomIntern.makeForm("shrubbery creation", "Garden");
	if (form3)
	{
		bob.signForm(*form3);
		bob.executeForm(*form3);
		delete form3;
	}

	AForm *form4 = someRandomIntern.makeForm("unknown form", "Error Target");
	if (form4)
	{
		delete form4;
	}

	return 0;
}
