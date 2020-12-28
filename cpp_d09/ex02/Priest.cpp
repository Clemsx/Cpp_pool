//
// Priest.cpp for d09_ex02 in /home/clemsx/CPP/Pool/cpp_d09/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 18:19:19 2017 clement xia
// Last update Fri Jan 13 08:43:17 2017 clement xia
//

#include <iostream>
#include <string>
#include "Priest.hh"
#include "Mage.hh"

Priest::Priest(const std::string &name, int lvl): Mage(name, lvl)
{
  this->strength = 4;
  this->stamina = 4;
  this->intel =  42;
  this->spirit = 21;
  this->agility = 2;
  std::cout << name << " enters in the order" << std::endl;
}

Priest::~Priest(){
}

int	Priest::CloseAttack()
{
  if (this->power >= 10)
    {
      this->power -= 10;
      std::cout << this->name << " uses a spirit explosion" << std::endl;
      return (this->spirit + 10);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}

int	Priest::RangeAttack()
{
  if (this->power >= 25)
    {
      this->power -= 25;
      std::cout << this->name << " launches a fire ball" << std::endl;
      return (this->spirit + 20);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}

void	Priest::Heal()
{
  if (this->power >= 10)
    {
      this->power -= 10;
      this->pv += 70;
      if (this->pv > 100)
	this->pv = 100;
      std::cout << this->name << " casts a little heal spell" << std::endl;
    }
  else
    {
      this->power = 0;
      std::cout << this->name << " out of power" << std::endl;
    }
}
