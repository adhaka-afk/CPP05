/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:18:42 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/03 00:31:49 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::~Intern()
{
}

AForm *Intern::createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	struct FormCreationEntry
	{
		std::string formName;
		AForm *(*create)(const std::string &target);
	};

	FormCreationEntry formCreationEntries[] = {
		{"shrubbery creation", &Intern::createShrubberyCreationForm},
		{"robotomy request", &Intern::createRobotomyRequestForm},
		{"presidential pardon", &Intern::createPresidentialPardonForm},
	};
	const int numEntries = sizeof(formCreationEntries) / sizeof(FormCreationEntry);

	for (int i = 0; i < numEntries; ++i)
	{
		if (formCreationEntries[i].formName == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formCreationEntries[i].create(target);
		}
	}

	std::cout << "Error: Form name '" << formName << "' does not exist." << std::endl;
	return nullptr;
}
