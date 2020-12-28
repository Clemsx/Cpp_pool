/*
** Banana.h for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 17 11:10:51 2017 clement xia
** Last update Tue Jan 17 19:29:39 2017 clement xia
*/

#ifndef BANANA_H_
# define BANANA_H_

# include <string>
# include <iostream>
# include "Fruit.h"

class	Banana : public Fruit
{
 public:
  Banana();
  virtual ~Banana();

  int		getVitamins() const;
  std::string const&	getName() const;
};

#endif	/* !BANANA_H_ */
