/*
** func_ptr.c for d02_ex3 in /home/clemsx/CPP/Pool/cpp_d02m/ex03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan  5 13:10:35 2017 clement xia
** Last update Thu Jan  5 16:28:11 2017 clement xia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func_ptr.h"

void	print_normal(char *str)
{
  printf("%s\n", str);
}

void	print_reverse(char *str)
{
  int	i;

  i = strlen(str) - 1;
  while (i >= 0)
    {
      printf("%c", str[i]);
      i--;
    }
  printf("\n");
}

void	print_upper(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	printf("%c", str[i] - 32);
      else
	printf("%c", str[i]);
      i++;
    }
  printf("\n");
}

void	print_42(char *str)
{
  (void)str;
  printf("42\n");
}

void	do_action(t_action action , char *str)
{
  t_do_action tab[4] = {{PRINT_NORMAL, print_normal},
			{PRINT_REVERSE, print_reverse},
			{PRINT_UPPER, print_upper},
			{PRINT_42, print_42}};
  int	i;

  i = -1;
  while (++i < 4 && tab[i].action != action);
  (tab[i]).t_funct(str);
	
}
