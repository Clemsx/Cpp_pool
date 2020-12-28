//
// Banana.cpp for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 17 11:13:02 2017 clement xia
// Last update Tue Jan 17 19:29:47 2017 clement xia
//

#include <string>
#include <iostream>
#include "Banana.h"

Banana::Banana()
{
  this->_name = "banana";
  this->_vitamins = 5;
}

Banana::~Banana()
{}

std::string const&    Banana::getName() const
{
  return (this->_name);
}

int	Banana::getVitamins() const
{
  return (this->_vitamins);
}
