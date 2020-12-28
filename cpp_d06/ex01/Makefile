##
## Makefile for d06_ex01 in /home/clemsx/CPP/Pool/cpp_d06/ex00
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Mon Jan  9 10:17:02 2017 clement xia
## Last update Mon Jan  9 14:32:01 2017 clement xia
##

CC = g++

NAME = my_convert_temp

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++03

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(FLAGS)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJS)

re: fclean all

.PHONY: all clean fclean re
