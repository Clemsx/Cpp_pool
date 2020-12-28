/*
** func_ptr.h for d02_ex03 in /home/clemsx/CPP/Pool/cpp_d02m/ex03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan  5 13:15:34 2017 clement xia
** Last update Thu Jan  5 15:36:29 2017 clement xia
*/

#ifndef FUNC_PTR_H_
# define FUNC_PTR_H_

#include "func_ptr_enum.h"

void	print_normal(char *str);
void	print_reverse(char *str);
void	print_upper(char *str);
void	print_42(char *str);
void	do_action(t_action action, char *str);

typedef struct s_do_action
{
  t_action	action;
  void	(*t_funct)(char *);
}		t_do_action;

#endif /* !FUNC_PTR_H_ */
