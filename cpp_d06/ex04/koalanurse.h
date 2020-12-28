/*
** koalanurse.h for d06_ex03 in /home/clemsx/CPP/Pool/cpp_d06/ex03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan  9 19:48:12 2017 clement xia
** Last update Mon Jan  9 19:56:13 2017 clement xia
*/

#ifndef KOALANURSE_H_
# define KOALANURSE_H_

#include <string.h>
#include "sickkoala.h"

class	KoalaNurse
{
 private:
  int	_id_;
  bool	_stat_;

 public:
  KoalaNurse(int);
  ~KoalaNurse();

  void	giveDrug(std::string medic, SickKoala *Koala);
  std::string readReport(std::string rep);
  void timeCheck();
};

#endif	/* !KOALANURSE_H_ */
