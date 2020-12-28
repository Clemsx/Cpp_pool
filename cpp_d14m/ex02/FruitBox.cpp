//
// FruitBox.cpp for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 17 11:28:03 2017 clement xia
// Last update Tue Jan 17 19:31:50 2017 clement xia
//

#include <string>
#include <iostream>
#include "FruitBox.h"

FruitBox::FruitBox(int size)
{
  this->_size = size;
  this->_nb = 0;
  this->_list = NULL;
}

FruitBox::~FruitBox()
{}

int		FruitBox::nbFruits() const
{
  return (this->_nb);
}

bool		FruitBox::putFruit(Fruit *f)
{
  FruitNode*	tmp;
  FruitNode*	element;

  if (this->_nb >= this->_size)
    return (false);
  element = new FruitNode();
  element->fruit = f;
  tmp = this->_list;
  if (this->_list == NULL)
    this->_list = element;
  else
    {
      while (tmp->next != NULL)
	{
	  if (tmp->fruit == f)
	    return (false);
	  tmp = tmp->next;
	}
      tmp->next = element;
    }
  this->_nb = this->_nb + 1;
  return (true);
}

Fruit*		FruitBox::pickFruit()
{
  Fruit*	f;
  FruitNode*	tmp;

  if (this->_nb == 0)
    return (NULL);
  f = this->_list->fruit;
  tmp = this->_list->next;
  delete this->_list;
  this->_list = tmp;
  this->_nb = this->_nb - 1;
  return (f);
}

FruitNode*	FruitBox::head() const
{
  return (this->_list);
}
