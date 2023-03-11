# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 19:36:48 by mmakboub          #+#    #+#              #
#    Updated: 2023/03/11 20:29:10 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
FONCTIONS = ClapTrap.cpp\
	main.cpp
	
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