/*
** String.c for d03_ex00 in /home/clemsx/CPP/Pool/cpp_d03/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan  6 09:03:37 2017 clement xia
** Last update Fri Jan  6 11:54:20 2017 clement xia
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "String.h"

static void assign_s(String *this, String const *str);
static void assign_c(String *this, char const *s);
static void append_s(String *this, String const *ap);
static void append_c(String *this, char const *aps);

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;
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

void	append_s(String *this, String const *ap)
{
  char *tmp;

  tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(ap->str) + 1));
  tmp[0] = '\0';
  tmp = strcat(tmp, this->str);
  tmp = strcat(tmp, ap->str);
  free(this->str);
  this->str = strdup(tmp);
  free(tmp);
}

void	append_c(String *this, char const *aps)
{
  char *tmp;

  tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(aps) + 1));
  tmp[0] = '\0';
  tmp = strcat(tmp, this->str);
  tmp = strcat(tmp, aps);
  free(this->str);
  this->str = strdup(tmp);
  free(tmp);
}
