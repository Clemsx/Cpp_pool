/*
** ex_6.h for d01_ex06 in /home/clemsx/CPP/Pool/cpp_d01/ex06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Jan  4 19:58:06 2017 clement xia
** Last update Wed Jan  4 20:16:18 2017 clement xia
*/

#ifndef EX_6_H_
# define EX_6_H_

typedef union s_exo
{
  char	foo[2];
  char	bar[2];
}	t_exo;

typedef struct s_struct
{
  short int	foo;
  union s_exo bar;
}	u_struct;

typedef union s_foo
{
  struct s_struct foo;
  int	bar;
}	t_foo;

#endif /* !EX_6_H_ */
