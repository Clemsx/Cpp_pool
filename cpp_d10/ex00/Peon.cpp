//
// Peon.cpp for d10_ex00 in /home/clemsx/CPP/Pool/cpp_d10/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 10:56:52 2017 clement xia
// Last update Fri Jan 13 13:29:26 2017 clement xia
//

#include <string>
#include <iostream>
#include "Peon.hh"

Peon::Peon(std::string name)
  : Victim(name)
{
  std::cout << "Zog Zog." << std::endl;
}

Peon::~Peon(){
  std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const{
  std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
