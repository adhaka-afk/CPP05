/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:10:11 by adhaka            #+#    #+#             */
/*   Updated: 2024/06/29 08:54:43 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main()
// {
// 	try
// 	{
// 		Bureaucrat john("John", 50);
// 		Form       taxForm("Tax Form", 40, 30);

// 		std::cout << john << std::endl;
// 		std::cout << taxForm << std::endl;
// 		john.signForm(taxForm);
// 		std::cout << "Form signed successfully by " << john.getName() << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Error: " << e.what() << std::endl;
// 	}
// 	return 0;
// }


#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat john("John", 50);
        Form taxForm("Tax Form", 40, 30);
        Form insuranceForm("Insurance Form", 60, 50);

        std::cout << john << std::endl;
        std::cout << taxForm << std::endl;
        std::cout << insuranceForm << std::endl;

        john.signForm(taxForm); // Should throw GradeTooLowException
        john.signForm(insuranceForm); // Should succeed

        std::cout << taxForm << std::endl;
        std::cout << insuranceForm << std::endl;

        // More test cases
        Bureaucrat alice("Alice", 30);
        Bureaucrat bob("Bob", 70);

        Form leaveForm("Leave Form", 20, 10);
        Form healthForm("Health Form", 80, 70);

        alice.signForm(leaveForm); // Should succeed
        bob.signForm(leaveForm); // Should throw GradeTooLowException
        bob.signForm(healthForm); // Should succeed

        std::cout << leaveForm << std::endl;
        std::cout << healthForm << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
