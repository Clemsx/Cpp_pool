//
// Federation.cpp for d07m_ex00 in /home/clemsx/CPP/Pool/cpp_d07m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 10:31:31 2017 clement xia
// Last update Wed Jan 11 08:44:15 2017 clement xia
//

#include <string>
#include <iostream>
#include "Federation.hh"

/*
** STARFLEET::SHIP
*/

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  
  std::cout << "The ship USS " << name << " has been finished. ";
  std::cout << "It is " << length << " m in length and " << width << " m in width.";
  std::cout << std::endl;
  std::cout << "It can go to Warp " << maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship(){
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core){
  this->_core = core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::checkCore(){
  WarpSystem::QuantumReactor	*tmp;
  std::string stab;
  
  tmp = this->_core->checkReactor();
  if (tmp->isStable() == true)
    stab = "stable";
  else
    stab = "unstable";
  std::cout << "USS " << this->_name << ": The core is ";
  std::cout << stab;
  std::cout << " at the time." << std::endl;
}

void	Federation::Starfleet::Ship::promote(Captain *cap)
{
  this->_cap = cap;
  std::cout << cap->getName() << ": I'm glad to be the captain of the USS ";
  std::cout << this->_name << "." <<  std::endl;
}

/*
** SHIP
*/

Federation::Ship::Ship(int length, int width, std::string name)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = 1;

  std::cout <<"The independant ship " <<name<< " just finished its construction.";
  std::cout << " It is " << length << " m in length and ";
  std::cout << width << " m in width." << std::endl;
}

Federation::Ship::~Ship(){
}

void    Federation::Ship::setupCore(WarpSystem::Core *core){
  this->_core = core;
  std::cout << this->_name << ": The core is set." << std::endl;
}

void    Federation::Ship::checkCore(){
  WarpSystem::QuantumReactor    *tmp;
  std::string stab;

  tmp = this->_core->checkReactor();
  if (tmp->isStable() == true)
    stab = "stable";
  else
    stab = "unstable";
  std::cout << this->_name << ": The core is ";
  std::cout << stab;
  std::cout << " at the time." << std::endl;
}

/*
** CAPTAIN
*/

Federation::Starfleet::Captain::Captain(std::string name)
{
  this->_name = name;
}

Federation::Starfleet::Captain::~Captain(){
}

std::string	Federation::Starfleet::Captain::getName(){
  return (this->_name);
}

void	Federation::Starfleet::Captain::setAge(int age){
  this->_age = age;
}

int	Federation::Starfleet::Captain::getAge(){
  return (this->_age);
}

/*
** ENSIGN
*/

Federation::Starfleet::Ensign::Ensign(std::string name)
{
  this->_name = name;
  std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign(){
}
