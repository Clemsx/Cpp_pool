/*
** main.c for cpp_d01 in /home/clemsx/CPP/Pool/cpp_d01/ex01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Jan  4 13:55:56 2017 clement xia
** Last update Wed Jan  4 19:34:21 2017 clement xia
*/

#include <stdio.h>
#include <stdlib.h>

void	menger(int x, int y, int s, int n);

int	my_getnbr(char *str)
{
  int	i;
  int	j;
  int	res;

  i = 0;
  j = 0;
  res = 0;
  if (str[0] == '\0')
    return (0);
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  res = (str[i] - 48) + res * 10;
	  j = j + 1;
	}
      else if ((str[i] < 48 || str[i] > 57) && res != 0)
	return (res);
      if (j > 14)
	return (0);
      i++;
    }
  return (res);
}

int	main(int ac, char **av)
{
  int	square;
  int	lvl;
  int	i;
  int	occ;
  
  if (ac == 3)
    {
      square = my_getnbr(av[1]);
      lvl = my_getnbr(av[2]);
      if (square % 3 != 0 || lvl > square)
	return (EXIT_FAILURE);
      i = square;
      occ = 1;
      while (i > 3)
	{
	  i = i / 3;
	  ++occ;
	}
      menger(square, square, square, lvl);
    }
  return (0);
}
