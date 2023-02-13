NAME = main
FONCTIONS = main.cpp
	
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