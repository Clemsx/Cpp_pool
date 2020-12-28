/*
** Lemon.h for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 17 10:58:45 2017 clement xia
** Last update Tue Jan 17 19:30:01 2017 clement xia
*/

#ifndef LEMON_H_
# define LEMON_H_

# include <string>
# include <iostream>
# include "Fruit.h"

class	Lemon : public Fruit
{
 public:
  Lemon();
  virtual ~Lemon();

  int	getVitamins() const;
  std::string const&	getName() const;
};

#endif	/* !LEMON_H_ */
