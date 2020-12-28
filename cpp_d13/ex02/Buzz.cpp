//
// Buzz.cpp for d13_ex02 in /home/clemsx/CPP/Pool/cpp_d13/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan 16 17:48:58 2017 clement xia
// Last update Thu Jan 19 09:32:43 2017 clement xia
//

#include <string>
#include <iostream>
#include "Buzz.h"

Buzz::Buzz(const std::string name, const std::string filename)
  : Toy(Toy::BUZZ, name, filename)
{}

Buzz::~Buzz(){}
