/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:16:21 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/02 04:55:30 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("DefaultForm"), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{
}
AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
}


AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
		_isSigned = src._isSigned;
	return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::isSigned() const
{
	return _isSigned;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}
const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os <<"xxxxxxx----form details----xxxxxxx\n" << std::endl
	   << "Form: " << form.getName()
	   << ", Sign Grade: " << form.getGradeToSign()
	   << ", Execute Grade: " << form.getGradeToExecute()
	   << ", Signed: " << (form.isSigned() ? "Yes" : "No") << std::endl
	   << "\nxxxxxxx----------------------xxxxxxx" << std::endl;
	return os;
}
