//
// Toy.cpp for d13_ex00 in /home/clemsx/CPP/Pool/cpp_d13/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan 16 11:27:20 2017 clement xia
// Last update Thu Jan 19 09:31:47 2017 clement xia
//

#include <string>
#include <iostream>
#include "Toy.h"

Toy::Toy()
  : name("Toy"), type(BASIC_TOY)
{}

Toy::Toy(const ToyType type, const std::string name, const std::string file)
{
  this->type = type;
  this->name = name;
  this->picture.getPictureFromFile(file);
}

Toy::~Toy(){}

Toy::ToyType		Toy::getType() const{
  return (this->type);
}

std::string	Toy::getName() const{
  return (this->name);
}

std::string	Toy::getAscii() const{
  return (this->picture.data);
}

bool		Toy::setAscii(std::string filename)
{
  Picture *pic;
  return (pic->getPictureFromFile(filename));
}

void		Toy::setName(std::string name)
{
  this->name = name;
}

/*
int main()
{
  Toy toto;
  Toy ET(Toy::ALIEN, "green", "./alien.txt");
  
  toto.setName("TOTO !");
  if (toto.getType() == Toy::BASIC_TOY)
    std::cout << "basic toy: " << toto.getName() << std::endl
	      << toto.getAscii() << std::endl;
  if (ET.getType() == Toy::ALIEN)
    std::cout << "this alien is: " << ET.getName() << std::endl
	      << ET.getAscii() << std::endl;
   return 1337;
}
*/
