# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajung <ajung@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 19:59:52 by oryzon            #+#    #+#              #
#    Updated: 2022/10/11 16:05:32 by ajung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	weapon

SRCS		=	main.cpp	\
				HumanA.cpp	\
				HumanB.cpp	\
				Weapon.cpp	\

INCL		=	HumanA.hpp	\
				HumanB.hpp	\
				Weapon.hpp	\

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
