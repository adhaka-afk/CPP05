# CPP05


## Description:

This module delves into exceptions and advanced C++ concepts such as inheritance, polymorphism, and the handling of abstract classes. The exercises simulate a bureaucratic system, testing the ability to create complex class hierarchies and manage exceptions effectively.
## Overview:

The module consists of four exercises:

## Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
- Objective: Implementing a Bureaucrat class, representing a bureaucratic entity with a name and grade.
  
**Key Features:**
- Constant name and a mutable grade, ranging from 1 (highest) to 150 (lowest).
- Exception handling for invalid grade assignments (GradeTooHighException and GradeTooLowException).
- Member functions to increment and decrement the grade, with appropriate exception handling.
- Overload of the << operator to provide a formatted output of the Bureaucrat’s details.
## Exercise 01: Form up, maggots!
- Objective: Introducing a Form class that can be signed by Bureaucrats.

**Key Features:**
- A form has a constant name, a boolean sign status, and required grades to sign and execute.
- Exception handling for invalid grades (GradeTooHighException and GradeTooLowException).
- A beSigned() function allowing a Bureaucrat to sign the form if their grade is high enough.
- A signForm() function in the Bureaucrat class to handle the signing process and print appropriate messages.
## Exercise 02: No, you need form 28B, not 28C...
- Objective: Expanding the Form class into an abstract base class AForm, and implementing concrete forms that perform specific actions.

**Key Features:**
- Creation of three derived classes: ShrubberyCreationForm, RobotomyRequestForm, and PresidentialPardonForm.
- Each form has specific grades required to sign and execute, and performs unique actions:
- ShrubberyCreationForm: Creates an ASCII tree file.
- RobotomyRequestForm: Has a 50% chance to robotomize a target.
- PresidentialPardonForm: Pardons a target.
- Implementation of an execute() function to enforce execution rules and perform the action if all conditions are met.
- A Bureaucrat function executeForm() to attempt the execution of a form, with appropriate messaging.

## Exercise 03: At least this beats coffee-making
- Objective: Implementing an Intern class capable of creating forms dynamically.
  
**Key Features:**
- The Intern class includes a makeForm() function that takes a form name and target as parameters and returns a pointer to the created form.
- The function prints a success message when a form is created, or an error message if the form type is unknown.
- The design avoids the use of large conditional chains (if/else), focusing instead on a clean and efficient approach.

## File Structure: 
- ex00/: Contains the implementation of the Bureaucrat class.
- ex01/: Adds the Form class to the files from ex00.
- ex02/: Expands with the abstract AForm class and concrete form implementations.
- ex03/: Introduces the Intern class, alongside files from previous exercises.
- Makefile: Provided in each directory for compiling the respective exercises.
- main.cpp: Each directory contains a main.cpp file with test cases to demonstrate the functionality.
## Compilation and Execution:

Navigate to the Exercise Directory: Open a terminal and change to the directory of the exercise you want to run.
 ```bash
cd ex00  # Replace 'ex00' with the exercise directory you want to run
```
Compile the Code: Use the provided Makefile to compile the code.
 ```bash
make
```
Run the Executable: After successful compilation, run the generated executable.
```bash
./bureaucrat_test  # Replace 'bureaucrat_test' with the name of the executable for the exercise
```
Verify Output: Check the output in the terminal to verify the correctness of the program.
   
Clean Up (Optional): To clean up the compiled files, you can use the clean/fclean target in the Makefile.
 ```bash
make clean
```
or 
 ```bash
make fclean
```

## Exercise Specifics:

- Exception Handling: Robust exception handling is demonstrated throughout the module, with custom exception classes ensuring that the system behaves predictably in error scenarios.
- Polymorphism: The module emphasizes polymorphism, particularly in Exercise 02 with the use of an abstract base class and derived concrete classes.
- Dynamic Form Creation: Exercise 03 showcases dynamic object creation using the Intern class, demonstrating an efficient way to manage different types of forms.

## 🚀 Next Project

[CPP06](https://github.com/adhaka-afk/CPP06)

## ⏳ Previous Project

[Inception](https://github.com/adhaka-afk/Inception)


