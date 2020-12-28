/*
** Exo-1.c for d09_ex-1 in /home/clemsx/CPP/Pool/cpp_d09/ex-1
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Jan 12 09:21:42 2017 clement xia
** Last update Thu Jan 12 19:10:12 2017 clement xia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Exo-1.h"

static void	KoalaInitializer(t_koala *this, char *_name, char _isALegend)
{
  t_cthulhu	*new_ct;

  new_ct = NewCthulhu();
  this->m_parent = *new_ct;
  this->m_parent.m_name = _name;
  if (_isALegend <= 0)
    this->m_parent.m_power = 0;
  this->m_isALegend = _isALegend;
}

static void	CthulhuInitializer(t_cthulhu *this)
{
  this->m_name = malloc(sizeof(char) * (strlen("Cthulhu") + 1));
  this->m_name = "Cthulhu";
  this->m_power = 42;
}

t_cthulhu	*NewCthulhu()
{
  t_cthulhu	*new_ct;

  if ((new_ct = malloc(sizeof(t_cthulhu))) == NULL)
    return(NULL);
  CthulhuInitializer(new_ct);
  printf("----\nBuilding %s\n", new_ct->m_name);
  return (new_ct);
}

void		PrintPower(t_cthulhu *this)
{
  printf("Power => %d\n", this->m_power);
}

void		Attack(t_cthulhu *this)
{
  if (this->m_power >= 42)
    {
      this->m_power -= 42;
      printf("%s attacks and destroys the city\n", this->m_name);
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void		Sleeping(t_cthulhu *this)
{
  this->m_power = 42000;
  printf("%s sleeps\n", this->m_name);
}

t_koala		*NewKoala(char *name, char _isALegend)
{
  t_koala	*new_k;

  if ((new_k = malloc(sizeof(t_koala))) == NULL)
    return (NULL);
  KoalaInitializer(new_k, name, _isALegend);
  printf("Building %s\n", name);
  return (new_k);
}

void		Eat(t_koala *this)
{
  this->m_parent.m_power = 42;
  printf("%s eats\n", this->m_parent.m_name);
}

/*
int	main()
{
  t_koala *_LKoala = NewKoala("Legend", 1);
  t_koala *_NLKoala = NewKoala("NotLegend", 0);

  t_cthulhu	*_cthulhu = NewCthulhu();

  printf("----Start----\n");

  PrintPower(_cthulhu);
  PrintPower(&_LKoala->m_parent);
  PrintPower(&_NLKoala->m_parent);

  Attack(_cthulhu);
  Attack(&_LKoala->m_parent);
  Attack(&_NLKoala->m_parent);

  Eat(_NLKoala);

  Attack(_cthulhu);
  Sleeping(_cthulhu);
  PrintPower(_cthulhu);

  Attack(&_NLKoala->m_parent);

  return (0);
}
*/
