/*
** String.c for d03_ex00 in /home/clemsx/CPP/Pool/cpp_d03/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan  6 09:03:37 2017 clement xia
** Last update Fri Jan  6 20:43:23 2017 clement xia
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "String.h"

static void assign_s(String *this, String const *str);
static void assign_c(String *this, char const *s);
static void append_s(String *this, String const *ap);
static void append_c(String *this, char const *aps);
static char at(String *this, size_t pos);
static void clear(String *this);
static int size(String *this);
static int compare_s(String *this, const String *str);
static int compare_c(String *this, char const *str);
static size_t copy(String *this, char *s, size_t n, size_t pos);

void	StringInit(String *this, char const *s)
{
  this->str = strdup(s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;
  this->at = &at;
  this->clear = &clear;
  this->size = &size;
  this->compare_s = &compare_s;
  this->compare_c = &compare_c;
  this->copy = &copy;
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

char	at(String *this, size_t pos)
{
  if (strlen(this->str) < pos)
    return (-1);
  return (this->str[pos]);
}

void	clear(String *this)
{
  int	i;
  int len;

  i = -1;
  len = strlen(this->str);
  while (++i < len)
    {
      this->str[i] = 0;
    }
}

int	size(String *this)
{
  if (this->str == NULL || this == NULL)
    return (-1);
  return (strlen(this->str));
}

int	compare_s(String *this, const String *str)
{
  return (strcmp(this->str, str->str));
}

int	compare_c(String *this, char const *str)
{
  return (strcmp(this->str, str));
}

size_t	copy(String *this, char *s, size_t n, size_t pos)
{
  s = strncpy(s, &this->str[pos], n);
  return (strlen(s) < n ? strlen(s) : n);
}
