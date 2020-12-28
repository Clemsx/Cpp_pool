//
// Sorcerer.cpp for d10_ex00 in /home/clemsx/CPP/Pool/cpp_d10/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 10:56:16 2017 clement xia
// Last update Fri Jan 13 13:32:25 2017 clement xia
//

#include <string>
#include <iostream>
#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string name, std::string title)
  : name(name), title(title)
{
  std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(){
  std::cout << this->name << ", " << this->title << ", is dead.";
  std::cout << " Consequences will never be the same !" << std::endl;
}

std::string	Sorcerer::getName() const{
  return (this->name);
}

std::string	Sorcerer::getTitle() const{
  return (this->title);
}

void		Sorcerer::polymorph(Victim const &v) const{
  v.getPolymorphed();
}

std::ostream&	operator<<(std::ostream &os, Sorcerer &s){
  os << "I am " << s.getName() << ", " << s.getTitle() << ", I like ponies !" << std::endl;
  return (os);
}
 
