/*
** String.c for d03_ex00 in /home/clemsx/CPP/Pool/cpp_d03/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan  6 09:03:37 2017 clement xia
** Last update Fri Jan  6 10:39:41 2017 clement xia
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "String.h"

static void assign_s(String *this, String const *str);
static void assign_c(String *this, char const *s);

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
}

void	StringDestroy(String *this)
{
  free(this->str);
  this->str = NULL;
}

void	assign_s(String *this, String const *str)
{
  this->str = strdup(str->str);
}

void	assign_c(String *this, char const *s)
{
  this->str = strdup(s);
}
