# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 16:13:53 by oryzon            #+#    #+#              #
#    Updated: 2022/10/25 02:49:22 by oryzon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

SRCS		=	main.cpp		\
				Animal.cpp		\
				Cat.cpp			\
				Dog.cpp			\
				Brain.cpp		\

INCL		=	Animal.hpp		\
				Cat.hpp			\
				Dog.hpp			\
				Brain.hpp		\

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
