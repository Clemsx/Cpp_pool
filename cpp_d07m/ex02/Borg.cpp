//
// Borg.cpp for d07m_ex01 in /home/clemsx/CPP/Pool/cpp_d07m/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 14:44:43 2017 clement xia
// Last update Tue Jan 10 17:18:07 2017 clement xia
//

#include <string>
#include <iostream>
#include "Destination.hh"
#include "Borg.hh"

Borg::Ship::Ship()
{
  this->_side = 300;
  this->_maxWarp = 9;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves";
  std::cout << " unconditionally." << std::endl;
  std::cout << "Your biological characteristics and technologies will be";
  std::cout << " assimilated." << std::endl;
  std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship(){
}

void	Borg::Ship::setupCore(WarpSystem::Core *core)
{
  this->_core = core;
}

void	Borg::Ship::checkCore()
{
  WarpSystem::QuantumReactor	*tmp;
  std::string stab;
  
  tmp = this->_core->checkReactor();
  if (tmp->isStable() == true)
    stab = "Everything is in order.";
  else
    stab = "Critical failure imminent.";
  std::cout << stab << std::endl;
}

bool			Borg::Ship::move(int warp, Destination d)
{
  WarpSystem::QuantumReactor	*tmp;

  tmp = this->_core->checkReactor();
  if (warp > this->_maxWarp || d == this->_location || tmp->isStable() == false)
    return (false);
  this->_location = d;
  return (true);
}

bool			Borg::Ship::move(int warp)
{
  WarpSystem::QuantumReactor	*tmp;

  tmp = this->_core->checkReactor();
  if (warp > this->_maxWarp || this->_home == this->_location || tmp->isStable() == false)
    return (false);
  this->_location = this->_home;
  return (true);
}

bool			Borg::Ship::move(Destination d)
{
  WarpSystem::QuantumReactor	*tmp;
  
  tmp = this->_core->checkReactor();
  if (d == this->_location || tmp->isStable() == false)
    return (false);
  this->_location = d;
  return (true);
}

bool			Borg::Ship::move()
{
  WarpSystem::QuantumReactor	*tmp;

  tmp = this->_core->checkReactor();
  if (tmp->isStable() == false)
    return (false);
  this->_location = this->_home;
  return (true);
}
