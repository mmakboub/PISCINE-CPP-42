# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:22:18 by mmakboub          #+#    #+#              #
#    Updated: 2023/05/24 13:48:36 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
FONCTIONS = Main.cpp\
	
CC = c++
CFLAGS = -Wall -Werror -Wextra  -std=c++98
RM = rm -f

OBJS = $(FONCTIONS:.cpp=.o)


all : $(NAME)

$(NAME):	$(OBJS)	
	$(CC) $(OBJS) -o $(NAME)

%.o:%.cpp 
	$(CC) $(CFLAGS) -c ${FONCTIONS}
	
clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) 

re: fclean all 