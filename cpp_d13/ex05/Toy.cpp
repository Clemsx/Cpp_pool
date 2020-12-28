//
// Toy.cpp for d13_ex00 in /home/clemsx/CPP/Pool/cpp_d13/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan 16 11:27:20 2017 clement xia
// Last update Tue Jan 17 09:08:46 2017 clement xia
//

#include <string>
#include <iostream>
#include "Toy.h"

Toy::Toy()
{
  this->type = BASIC_TOY;
  this->name = "toy";
}

Toy::Toy(const Toy& to)
{
  this->name = to.getName();
  this->type = to.getType();
  this->picture.data = to.getAscii();
}

Toy::Toy(const ToyType type, const std::string name, const std::string file)
{
  this->name = name;
  this->type = type;
  this->picture.getPictureFromFile(file);
}

Toy::~Toy()
{}

Toy&   				Toy::operator=(const Toy& to)
{
  this->name = to.getName();
  this->type = to.getType();
  this->picture.data = to.getAscii();
  return (*this);
}

Toy::ToyType   			Toy::getType() const
{
  return (this->type);
}

std::string			Toy::getName() const
{
  return (this->name);
}

std::string    		Toy::getAscii() const
{
  return (this->picture.data);
}

void	       		Toy::setName(std::string name)
{
  this->name = name;
}

bool  			Toy::setAscii(std::string filename)
{
  if (picture.getPictureFromFile(filename))
    return (true);
  this->error.setType(Error::PICTURE);
  return (false);
}

void   			Toy::speak(const std::string state)
{
  std::cout << name << " \"" << state << "\"" << std::endl;
}

bool  			Toy::speak_es(const std::string state)
{
  (std::string)state;
  error.setType(Error::SPEAK);
  return (false);
}

Toy&	     		Toy::operator<<(const std::string& as)
{
  picture.data = as;
  return (*this);
}

std::ostream&	      	operator<<(std::ostream& os, const Toy& other)
{
  os << other.getName() << std::endl << other.getAscii() << std::endl;
  return (os);
}

Toy::Error const&	     Toy::getLastError() const
{
  return (this->error);
}

Toy::Error::Error()
{
  this->type = Toy::Error::UNKNOWN;
}

Toy::Error::~Error()
{}

void		      	Toy::Error::setType(ErrorType type)
{
  this->type = type;
}

std::string		      Toy::Error::what() const
{
  if (this->type == PICTURE)
    return ("bad new illustration");
  else if (this->type == SPEAK)
    return ("wrong mode");
  return ("");
}

std::string		      Toy::Error::where() const
{
  if (this->type == PICTURE)
    return ("setAscii");
  else if (this->type == SPEAK)
    return ("speak_es");
  return ("");  
}
