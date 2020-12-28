/*
** tab_to_2dtab.c for d02_ex2 in /home/clemsx/CPP/Pool/cpp_d02m/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan  5 10:21:41 2017 clement xia
** Last update Thu Jan  5 12:08:47 2017 clement xia
*/

#include <stdio.h>
#include <stdlib.h>

void	tab_to_2dtab(int *tab, int lenght, int width, int ***res)
{
  int	i;
  int	j;
  int	k;
  int	**tmp;

  tmp = malloc(sizeof(int *) * lenght);
  j = -1;
  k = -1;
  while (++j < lenght)
    {
      i = -1;
      tmp[j] = malloc(sizeof(int) * width);
      while (++i < width)
	{
	  tmp[j][i] = tab[++k];
	}
    }
  res[0] = tmp;
}
