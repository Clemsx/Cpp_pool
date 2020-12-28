//
// Woody.cpp for d13_ex02 in /home/clemsx/CPP/Pool/cpp_d13/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan 16 17:52:35 2017 clement xia
// Last update Tue Jan 17 08:54:47 2017 clement xia
//

#include <string>
#include <iostream>
#include "Woody.h"

Woody::Woody(const std::string name, const std::string file)
  : Toy(Toy::WOODY, name, file)
{}

Woody::~Woody()
{}

void	Woody::speak(const std::string state)
{
  std::cout << "WOODY: " << this->name << " \"" << state << "\"" << std::endl;
}
