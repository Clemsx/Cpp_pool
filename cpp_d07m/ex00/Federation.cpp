//
// Federation.cpp for d07m_ex00 in /home/clemsx/CPP/Pool/cpp_d07m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 10:31:31 2017 clement xia
// Last update Tue Jan 10 20:13:18 2017 clement xia
//

#include <string>
#include <iostream>
#include "Federation.hh"
#include "WarpSystem.hh"

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
int	main(void)
{
  Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
  Federation::Ship Independant(150, 230, "Greok");
  WarpSystem::QuantumReactor QR;
  WarpSystem::QuantumReactor QR2;
  WarpSystem::Core core(&QR);
  WarpSystem::Core core2(&QR2);
 
  UssKreog.setupCore(&core);
  UssKreog.checkCore();
  Independant.setupCore(&core2);
  Independant.checkCore();
  QR.setStability(false);
  QR2.setStability(false);
  UssKreog.checkCore();
  Independant.checkCore();
  return 0;
}
*/
