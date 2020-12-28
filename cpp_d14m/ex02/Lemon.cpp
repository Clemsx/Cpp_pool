//
// Lemon.cpp for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 17 11:00:31 2017 clement xia
// Last update Tue Jan 17 19:29:55 2017 clement xia
//

#include <string>
#include <iostream>
#include "Lemon.h"

Lemon::Lemon()
{
  this->_name = "lemon";
  this->_vitamins = 3;
}

Lemon::~Lemon(){}

std::string const&	Lemon::getName() const
{
  return (this->_name);
}

int	Lemon::getVitamins() const
{
  return (this->_vitamins);
}
