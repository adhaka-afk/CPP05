/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:10:11 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/02 02:49:09 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat john("John", 50);
		Form taxForm("Tax Form", 40, 30);
		Form insuranceForm("Insurance Form", 60, 50);

		std::cout << john << std::endl;
		std::cout << taxForm << std::endl;
		std::cout << insuranceForm << std::endl;

		john.signForm(taxForm);
		john.signForm(insuranceForm);

		std::cout << std::endl;
		std::cout << taxForm << std::endl;
		std::cout << insuranceForm << std::endl;

		Bureaucrat alice("Alice", 30);
		Bureaucrat bob("Bob", 70);

		Form leaveForm("Leave Form", 30, 10);
		Form healthForm("Health Form", 80, 70);

		alice.signForm(leaveForm);
		bob.signForm(leaveForm);
		bob.signForm(healthForm);

		std::cout << std::endl;
		std::cout << leaveForm << std::endl;
		std::cout << healthForm << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
