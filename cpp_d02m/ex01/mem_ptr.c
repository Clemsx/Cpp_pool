/*
** mem_ptr.c for d02_01 in /home/clemsx/CPP/Pool/cpp_d02m/ex01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan  5 09:57:29 2017 clement xia
** Last update Thu Jan  5 10:20:16 2017 clement xia
*/

#include <string.h>
#include <stdlib.h>
#include "mem_ptr.h"

void	add_str(char *str1, char *str2, char **res)
{
  *res = malloc(sizeof(char) * (strlen(str1) + strlen(str2)) + 1);
  strcpy(*res, str1);
  strcat(*res, str2);
}

void	add_str_struct(t_str_op *str_op)
{
  str_op->res = malloc(sizeof(char) * (strlen(str_op->str1) + strlen(str_op->str2)) + 1);
  strcpy(str_op->res, str_op->str1);
  strcat(str_op->res, str_op->str2);
}
