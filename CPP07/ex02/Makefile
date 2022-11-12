NAME		=	a.out

SRCS		=	main.cpp		\


INCL		=	Array.hpp		\
				


CC			=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

RM			=	rm -f

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME) 

%.o : %.cpp
	$(CC) $(CPPFLAGS) -o $@ -c $< 

$(NAME)		:	$(OBJS)
				$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
