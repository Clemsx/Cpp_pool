//
// Fruit.cpp for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 17 10:56:18 2017 clement xia
// Last update Tue Jan 17 19:29:20 2017 clement xia
//

#include <string>
#include <iostream>
#include "Fruit.h"

Fruit::Fruit()
{
  this->_vitamins = 0;
  this->_name = "fruit";
}


Fruit::Fruit(std::string const name, int vita)
{
  this->_name = name;
  this->_vitamins = vita;
}

Fruit::~Fruit(){}

int		Fruit::getVitamins() const
{
  return (this->_vitamins);
}

std::string const&	Fruit::getName() const
{
  return (this->_name);
}
