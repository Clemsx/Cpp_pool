/*
** FruitBox.h for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 17 11:16:52 2017 clement xia
** Last update Tue Jan 17 19:18:00 2017 clement xia
*/

#ifndef FRUIT_BOX_H_
# define FRUIT_BOX_H_

# include <string>
# include <iostream>
# include "Fruit.h"
# include "FruitNode.h"

class	FruitBox
{
 protected:
  int	       	_nb;
  int	       	_size;
  FruitNode*	_list;

 public:
  FruitBox(int size);
  virtual ~FruitBox();

  int		nbFruits() const;
  bool		putFruit(Fruit* f);
  Fruit*	pickFruit();
  FruitNode*	head() const;
};

#endif	/* !FRUIT_BOX_H_ */
