##
## Makefile for d01_ex01 in /home/clemsx/CPP/Pool/cpp_d01/ex01
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Wed Jan  4 14:14:43 2017 clement xia
## Last update Wed Jan  4 19:39:07 2017 clement xia
##

CC = gcc

NAME = menger

SRCS = 	main.c	\
	menger.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -std=gnu99

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re
