/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:10:01 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/01 23:52:01 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		std::cout << "Creating Bureaucrat at highest grade (1)" << std::endl;
		Bureaucrat high("Alice", 1);
		std::cout << high << std::endl;
		std::cout << "Attempting to increment grade of Alice" << std::endl;
		high.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nCreating Bureaucrat at lowest grade (150)" << std::endl;
		Bureaucrat low("Bob", 150);
		std::cout << low << std::endl;
		std::cout << "Attempting to decrement grade of Bob" << std::endl;
		low.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nTesting copy constructor" << std::endl;
		Bureaucrat original("Charlie", 75);
		Bureaucrat copy = original;
		std::cout << "Original: " << original << std::endl;
		std::cout << "Copy: " << copy << std::endl;
		std::cout << "Modifying copy's grade" << std::endl;
		copy.incrementGrade();
		std::cout << "Original after modification: " << original << std::endl;
		std::cout << "Copy after modification: " << copy << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nTesting assignment operator" << std::endl;
		Bureaucrat first("Dave", 50);
		Bureaucrat second("Eve", 100);
		std::cout << "First before assignment: " << first << std::endl;
		std::cout << "Second before assignment: " << second << std::endl;
		first = second;
		std::cout << "First after assignment: " << first << std::endl;
		std::cout << "Second after assignment: " << second << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
