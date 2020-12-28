/*
** mul_div.c for d02_ex00 in /home/clemsx/CPP/Pool/cpp_d02m/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan  5 09:15:04 2017 clement xia
** Last update Thu Jan  5 09:56:16 2017 clement xia
*/

#include <stdio.h>

void add_mul_4param(int first, int second, int *add, int *mul)
{
  *add = first + second;
  *mul = first * second;
}

void add_mul_2param(int	*first, int *second)
{
  int	tmp;

  tmp = *first;
  *first = *first + *second;
  *second = tmp * *second;
}
