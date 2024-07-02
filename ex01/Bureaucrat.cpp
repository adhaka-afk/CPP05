/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:10:04 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/02 03:31:11 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is Too Low";
}

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		_grade = src._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << _name << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
	}

}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat's grade is " << bureaucrat.getGrade();
	return os;
}
