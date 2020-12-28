/*
** Exo-1.h for d09_ex-1 in /home/clemsx/CPP/Pool/cpp_d09/ex-1
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan 12 09:21:26 2017 clement xia
** Last update Thu Jan 12 13:59:51 2017 clement xia
*/

#ifndef EXO1_H_
# define EXO1_H_

typedef struct	s_cthulhu
{
  int		m_power;
  char		*m_name;
}		t_cthulhu;

typedef struct	s_koala
{
  t_cthulhu	m_parent;
  char		m_isALegend;
}		t_koala;

t_cthulhu	*NewCthulhu();
void		PrintPower(t_cthulhu *this);
void		Attack(t_cthulhu *this);
void		Sleeping(t_cthulhu *this);
t_koala		*NewKoala(char *name, char _isALegend);
void		Eat(t_koala *this);

#endif	/* !EXO1_H_ */
