//
// Paladin.cpp for d09_ex03 in /home/clemsx/CPP/Pool/cpp_d09/ex03
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 19:43:48 2017 clement xia
// Last update Fri Jan 13 08:50:52 2017 clement xia
//

#include <string>
#include <iostream>
#include "Paladin.hh"
#include "Priest.hh"

Paladin::Paladin(const std::string &name, int lvl)
  : Character(name, lvl), Warrior(name, lvl), Priest(name, lvl)
{
  this->strength = 9;
  this->stamina = 10;
  this->intel = 10;
  this->spirit = 10;
  this->agility = 2;
  std::cout << "the light falls on " << name << std::endl;
}

Paladin::~Paladin(){
}

void	Paladin::Heal()
{
  Priest::Heal();
}

int	Paladin::CloseAttack()
{
  return (Warrior::CloseAttack());
}

int	Paladin::RangeAttack()
{
  return (Priest::RangeAttack());
}

void	Paladin::RestorePower()
{
  Warrior::RestorePower();
}

int	Paladin::Intercept()
{
  if (this->power >= 10)
    {
      this->power -= 10;
      std::cout << this->name << " intercepts" << std::endl;
      Range = Character::CLOSE;
      return (0);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}
