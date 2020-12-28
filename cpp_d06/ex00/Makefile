##
## Makefile for d06_ex00 in /home/clemsx/CPP/Pool/cpp_d06/ex00
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Mon Jan  9 10:17:02 2017 clement xia
## Last update Mon Jan  9 14:31:31 2017 clement xia
##

CC = g++

NAME = my_cat

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++03

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(FLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
