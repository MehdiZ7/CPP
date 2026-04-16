# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/11 12:56:58 by mzouhir           #+#    #+#              #
#    Updated: 2026/04/15 16:49:42 by mzouhir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=office
SRCS= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS= ${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.o}}
OBJS_DIR= Objs/
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++98 -g3

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJS_DIR}%.o: %.cpp
	mkdir -p ${OBJS_DIR}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	-rm -rf ${OBJS_DIR}

fclean: clean
	-rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
