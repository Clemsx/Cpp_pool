//
// Victim.cpp for d10_ex00 in /home/clemsx/CPP/Pool/cpp_d10/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 10:56:29 2017 clement xia
// Last update Fri Jan 13 13:19:20 2017 clement xia
//

#include <string>
#include <iostream>
#include "Victim.hh"

Victim::Victim(std::string name)
  :name(name)
{
  std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim(){
  std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

std::string	Victim::getName() const{
  return (this->name);
}

void		Victim::getPolymorphed() const{
  std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Victim& v){
  os << "I'm " << v.getName() << " and i like otters !" << std::endl;
  return (os);
}

