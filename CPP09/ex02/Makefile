NAME		=	PmergeMe

SRCS		=	main.cpp		\
				PmergeMe.cpp	\


INCL		=	PmergeMe.hpp	\


CC			=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -O3 -g

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
