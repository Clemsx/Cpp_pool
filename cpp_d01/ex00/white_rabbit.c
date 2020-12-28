/*
** white_rabbit.c for cpp_day01 in /home/clemsx/CPP/Pool/cpp_d01/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Jan  4 09:27:25 2017 clement xia
** Last update Thu Jan  5 08:39:29 2017 clement xia
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	follow_the_white_rabbit(void)
{
  int	die;
  int	sum;
  int	rabbit;

  rabbit = 0;
  sum = 0;
  while (rabbit != 1)
    {
      die = ((rand() % 37) + 1);
      if (die == 13 || (die >= 34 && die < 37))
	printf("droite\n");
      if ((die >= 4 && die <= 6) || die == 17 || (die >= 18 && die <= 21) || die == 28)
	printf("gauche\n");
      if (die == 10 || die == 15 || die == 23)
	printf("devant\n");
      if (die == 26 || die % 8 == 0)
	printf("derriere\n");
      sum = die + sum;
      if (die == 1 || die == 37 || sum == 421 || sum >= 397)
	{
	  printf("LAPIN !!!\n");
	  rabbit = 1;
  	}
    }
  return (sum);
}
