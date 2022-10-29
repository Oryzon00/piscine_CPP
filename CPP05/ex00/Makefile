NAME		=	a.out

SRCS		=	main.cpp		\
				Bureaucrat.hpp	\


INCL		=	Bureaucrat.hpp	\


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
