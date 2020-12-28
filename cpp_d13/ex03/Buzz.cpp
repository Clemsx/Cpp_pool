//
// Buzz.cpp for d13_ex02 in /home/clemsx/CPP/Pool/cpp_d13/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan 16 17:48:58 2017 clement xia
// Last update Tue Jan 17 08:53:49 2017 clement xia
//

#include <string>
#include <iostream>
#include "Buzz.h"

Buzz::Buzz(const std::string name, const std::string file)
  : Toy(Toy::BUZZ, name, file)
{}

Buzz::~Buzz()
{}

void	Buzz::speak(const std::string state)
{
  std::cout << "BUZZ: " << this->name << " \"" << state << "\"" << std::endl;
}
