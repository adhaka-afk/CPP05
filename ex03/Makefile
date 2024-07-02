# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 07:54:24 by adhaka            #+#    #+#              #
#    Updated: 2024/07/02 07:04:16 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Intern

CC				= c++

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -std=c++98

HEADERS			=	Bureaucrat.hpp \
					AForm.hpp \
					Intern.hpp \
					PresidentialPardonForm.hpp \
					RobotomyRequestForm.hpp \
					ShrubberyCreationForm.hpp

SRCS			=	Bureaucrat.cpp \
					AForm.cpp \
					Intern.cpp \
					PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp \
					ShrubberyCreationForm.cpp \
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		${CC} ${CFLAGS} -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				$(RM) *_shrubbery

re:				fclean all

.PHONY:			all clean fclean re
