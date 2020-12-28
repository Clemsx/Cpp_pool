/*
** simple_list.c for d02a_ex00 in /home/clemsx/CPP/Pool/cpp_d02a/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan  5 19:42:40 2017 clement xia
** Last update Thu Jan  5 19:55:24 2017 clement xia
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "simple_list.h"

unsigned int list_get_size(t_list list)
{
  if (list == NULL)
    return (0);
  else
    return (1 + list_get_size(list->next));
}

t_bool list_is_empty(t_list list)
{
  if (list == NULL)
    return (TRUE);
  else
    return (FALSE);
  //return (list == NULL ? TRUE : FALSE);
}

void list_dump(t_list list)
{
  if (list != NULL)
    {
      printf("%f\n", list->value);
      list_dump(list->next);
    }
}

t_bool list_add_elem_at_front(t_list *front_ptr, double elem)
{
  t_list tp;

  if ((tp = malloc(sizeof(tp))) == NULL)
    return (FALSE);
  tp->value = elem;
  tp->next = *front_ptr;
  *front_ptr = tp;
  return (TRUE);
}

t_bool list_add_elem_at_back(t_list *front_ptr, double elem)
{
  t_list	tmp;
  t_list	st;

  st = *front_ptr;
  if ((tmp = malloc(sizeof(tmp))) == NULL)
    return (FALSE);
  tmp->value = elem;
  tmp->next = NULL;
  if (st == NULL)
    {
      *front_ptr = tmp;
      return (TRUE);
    }
  while (st != NULL && st->next != NULL)
    st = st->next;
  st->next = tmp;
  return (TRUE);
}

t_bool list_add_elem_at_position(t_list * front_ptr, double elem, unsigned int position)
{
  unsigned int	i;
  t_list st;
  t_list prev;
  t_list tmp;

  i = -1;
  st = *front_ptr;
  prev = st;
  if (position == 0)
    return (list_add_elem_at_front(front_ptr, elem));
  while (++i < position && st != NULL)
    {
      prev = st;
      st = st->next;
    }
  if (i < position && st == NULL)
    return (FALSE);
  if ((tmp = malloc(sizeof(tmp))) == NULL)
    return (FALSE);
  tmp->value = elem;
  tmp->next = st;
  prev->next = tmp;
  return (TRUE);
}

t_bool list_del_elem_at_front(t_list *front_ptr)
{
  t_list tmp;

  if (*front_ptr == NULL)
    return (FALSE);
  tmp = *front_ptr;
  free(tmp);
  *front_ptr = (*front_ptr)->next;
  return (TRUE);
}

t_bool list_del_elem_at_back(t_list *front_ptr)
{
  t_list st;

  st = *front_ptr;
  if (st == NULL)
    return (FALSE);
  if (st->next == NULL)
    {
      free (st);
      *front_ptr = NULL;
     return (TRUE);
    }
  while (st != NULL && st->next != NULL && st->next->next != NULL)
    st = st->next;
  free(st->next);
  st->next = NULL;
  return (TRUE);
}

t_bool list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
  t_list st;
  t_list prev;
  unsigned int	i;

  st = *front_ptr;
  prev = st;
  i = -1;
  while (st != NULL && ++i < position)
    {
      prev = st;
      st = st->next;
    }
  if (st == NULL)
    return (FALSE);
  prev->next = st->next;
  free(st);
  return (TRUE);
}

double list_get_elem_at_front(t_list list)
{
  return (list == NULL ? 0 : list->value);
}

double list_get_elem_at_back(t_list list)
{
  if (list->next == NULL)
    return (list->value);
  else
    return (list_get_elem_at_back(list->next));
}

double list_get_elem_at_position(t_list list, unsigned int position)
{
  if (position == 0)
    return (list->value);
  else
    return (list_get_elem_at_position(list->next, --position));
}

t_node *list_get_first_node_with_value(t_list list, double value)
{
  if (list->value == value)
    return (list);
  else
    return (list_get_first_node_with_value(list->next, value));
}
