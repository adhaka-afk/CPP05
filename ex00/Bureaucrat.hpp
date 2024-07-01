/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:09:57 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/01 23:38:35 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		const std::string _name;
		int   _grade;
		Bureaucrat();

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		Bureaucrat &operator = (const Bureaucrat &src);

		const std::string &getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
