# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 18:51:23 by mmakboub          #+#    #+#              #
#    Updated: 2023/02/13 18:52:22 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
FONCTIONS = Harl.cpp\
	main.cpp
	
CC = c++
CFLAGS = -Wall -Werror -Wextra  -std=c++98
RM = rm -f
INCLUDE = Harl.hpp

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