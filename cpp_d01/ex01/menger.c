/*
** menger.c for cpp_d01 in /home/clemsx/CPP/Pool/cpp_d01/ex01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Jan  4 13:56:12 2017 clement xia
** Last update Wed Jan  4 19:46:29 2017 clement xia
*/

#include <stdio.h>

void	menger(int x, int y, int s, int n)
{
  if (n > 0)
    {
      s = s / 3;
      printf("%.3d %.3d %.3d\n", s, x / 3, y / 3);
      menger(x - 2 * s, y - s  * 2, s, n - 1);
      menger(x - 2 * s, y + s, s, n - 1);
      menger(x - 2 * s, y + s * 3 + s, s, n - 1);
      menger(x + s, y - s * 2, s, n - 1);
      menger(x + s, y + s * 3 + s, s, n - 1);
      menger(x + s * 3 + s, y - 2 * s, s, n - 1);
      menger(x + s * 3 + s , y + s, s, n - 1);
      menger(x + 3 * s + s, y + 3 * s + s, s, n - 1);
    }
}
