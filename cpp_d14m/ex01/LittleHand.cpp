//
// LittleHand.cpp for d14m_ex01 in /home/clemsx/CPP/Pool/cpp_d14m
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 17 19:34:03 2017 clement xia
// Last update Tue Jan 17 21:14:38 2017 clement xia
//

#include <string>
#include <iostream>
#include "LittleHand.h"
#include "Fruit.h"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand(){
}

void    LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons,
                                 FruitBox& bananas, FruitBox& limes)
{
  Fruit*        fruit;
  FruitBox      fruitb(unsorted.nbFruits());

  while ((fruit = unsorted.pickFruit()))
    fruitb.putFruit(fruit);
  while ((fruit = fruitb.pickFruit()))
    {
      if (fruit->getName() == "lemon")
        lemons.putFruit(fruit);
      else if (fruit->getName() == "banana")
        bananas.putFruit(fruit);
      else if (fruit->getName() == "lime")
        limes.putFruit(fruit);
    }
}

