/*
** String.c for d03_ex00 in /home/clemsx/CPP/Pool/cpp_d03/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan  6 09:03:37 2017 clement xia
** Last update Fri Jan  6 10:31:31 2017 clement xia
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "String.h"

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
}

void	StringDestroy(String *this)
{
  free(this->str);
  this->str = NULL;
}
