# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 20:33:41 by mmakboub          #+#    #+#              #
#    Updated: 2023/04/10 21:30:29 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form
FONCTIONS = Bureaucrat.cpp\
		main.cpp\
		Form.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp
		
CC = c++
CFLAGS = -Wall -Werror -Wextra  -std=c++98
RM = rm -f
INCLUDE = *.hpp

OBJS = $(FONCTIONS:.cpp=.o)


all : $(NAME)

$(NAME):	$(OBJS)	$(INCLUDE)
	$(CC) $(OBJS) -o $(NAME)

%.o:%.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -c ${FONCTIONS}
	
clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) 

re: fclean all