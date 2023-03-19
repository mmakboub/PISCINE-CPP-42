# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 20:14:52 by mmakboub          #+#    #+#              #
#    Updated: 2023/03/17 20:14:54 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain
FONCTIONS = Animal.cpp\
		Cat.cpp\
		Brain.cpp\
		Dog.cpp\
		main.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp
	
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