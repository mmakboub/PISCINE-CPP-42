# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 00:01:11 by mmakboub          #+#    #+#              #
#    Updated: 2023/05/19 19:54:52 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
FONCTIONS = main.cpp\
			span.cpp
	
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