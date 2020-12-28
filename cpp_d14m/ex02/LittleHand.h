/*
** LittleHand.h for d14m_ex01 in /home/clemsx/CPP/Pool/cpp_d14m
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 17 19:33:27 2017 clement xia
** Last update Wed Jan 18 08:43:06 2017 clement xia
*/

#ifndef LITTLE_HAND_H_
# define LITTLE_HAND_H_

# include <string>
# include <iostream>
# include "FruitBox.h"
# include "Fruit.h"

class   LittleHand
{
 public:
  LittleHand();
  ~LittleHand();

  void  sortFruitBox(FruitBox& unsorted, FruitBox& lemons,
                     FruitBox& bananas, FruitBox& limes);
  static FruitBox* const* organizeCoconut(Fruit const * const *);
};

#endif  /* !LITTLE_HAND_H_ */
