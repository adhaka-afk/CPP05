# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 07:54:24 by adhaka            #+#    #+#              #
#    Updated: 2024/07/01 18:55:30 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Form1

CC				= c++

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -std=c++98

HEADERS			=	Bureaucrat.hpp \
					AForm.hpp \
					PresidentialPardonForm.hpp \
					RobotomyRequestForm.hpp \
					ShrubberyCreationForm.hpp

SRCS			=	Bureaucrat.cpp \
					AForm.cpp \
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
