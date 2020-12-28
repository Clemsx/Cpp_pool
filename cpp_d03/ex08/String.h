/*
** String.h for d03_ex00 in /home/clemsx/CPP/Pool/cpp_d03/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan  6 09:04:09 2017 clement xia
** Last update Fri Jan  6 13:41:12 2017 clement xia
*/

#ifndef STRING_H_
# define STRING_H_

#include <sys/types.h>

typedef struct s_string
{
  char	*str;
  void	(*assign_s)(struct s_string *this, struct s_string const *str);
  void	(*assign_c)(struct s_string *this, char const *s);
  void	(*append_s)(struct s_string *this, struct s_string const *ap);
  void	(*append_c)(struct s_string *this, char const *aps);
  char	(*at)(struct s_string *this, size_t pos);
  void	(*clear)(struct s_string *this);
  int	(*size)(struct s_string *this);
  int	(*compare_s)(struct s_string *this, const struct s_string *str);
  int	(*compare_c)(struct s_string *this, char const *str);
  size_t	(*copy)(struct s_string *this, char *s, size_t n, size_t pos);
  char const*	(*c_str)(struct s_string *this);
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* !STRING_H_ */
