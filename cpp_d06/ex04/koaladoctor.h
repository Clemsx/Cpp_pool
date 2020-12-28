/*
** koaladoctor.h for d06_ex04 in /home/clemsx/CPP/Pool/cpp_d06/ex03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan  9 20:30:05 2017 clement xia
** Last update Mon Jan  9 21:03:50 2017 clement xia
*/

#ifndef KOALADOCTOR_H_
# define KOALADOCTOR_H_

#include <string>
#include "sickkoala.h"
#include "koalanurse.h"

class	KoalaDoctor
{
 private:
  std::string	_name_;
  bool	_stat_;

 public:
  KoalaDoctor(std::string);
  ~KoalaDoctor();

  void	diagnose(SickKoala *pat);
  void	timeCheck();
};

#endif /* !KOALADOCTOR_H_ */
