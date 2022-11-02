NAME		=	bureaucracy

SRCS		=	main.cpp					\
				Bureaucrat.cpp				\
				Form.cpp					\
				PresidentialPardonForm.cpp	\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp		\


INCL		=	Bureaucrat.hpp				\
				Form.hpp					\
				PresidentialPardonForm.hpp	\
				ShrubberyCreationForm.hpp	\
				RobotomyRequestForm.hpp		\


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
