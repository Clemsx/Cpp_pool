/*
** FruitNode.h for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 17 11:39:16 2017 clement xia
** Last update Tue Jan 17 16:52:40 2017 clement xia
*/

#ifndef FRUIT_NODE_H_
# define FRUIT_NODE_H_

# include "Fruit.h"

class	FruitNode
{
 public:
  Fruit*		fruit;
  FruitNode*		next;
};

#endif	/* !FRUIT_NODE_H_ */
