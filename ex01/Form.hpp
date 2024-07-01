/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:11:05 by adhaka            #+#    #+#             */
/*   Updated: 2024/06/29 08:33:09 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool  _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &other);
		~Form();

		Form &operator = (const Form &other);

		std::string getName() const;
		bool isSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
