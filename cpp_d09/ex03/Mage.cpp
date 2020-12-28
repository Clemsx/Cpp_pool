//
// Mage.cpp for d09_ex02 in /home/clemsx/CPP/Pool/cpp_d09/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 18:07:16 2017 clement xia
// Last update Fri Jan 13 08:49:51 2017 clement xia
//

#include <iostream>
#include <string>
#include "Mage.hh"
#include "Character.hh"

Mage::Mage(const std::string &name, int lvl) : Character(name, lvl)
{
  this->strength = 6;
  this->stamina = 6;
  this->intel = 12;
  this->spirit = 11;
  this->agility = 7;
  std::cout << name << " teleported" << std::endl;
}

Mage::~Mage(){
}

int	Mage::CloseAttack(){
  if (this->power >= 10)
    {
      this->power -= 10;
      std::cout << this->name << " blinks" << std::endl;
      Range = Character::RANGE;
      return (1 - 1);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}

int	Mage::RangeAttack(){
    
  if (this->power >= 25)
    {
      this->power -= 25;
      std::cout << this->name << " launches a fire ball" << std::endl;
      return (this->spirit + 20);
    }
  std::cout << this->name << " out of power" << std::endl;
  return (0);
}

void	Mage::RestorePower(){
  this->power += this->intel + 50;
  if (this->power > 100)
    {
      this->power = 100;
    }
  std::cout << this->name << " takes a mana potion" <<std::endl;
}

void	Mage::Heal(){
  if (this->pv <= 50)
    this->pv += 50;
  else
    this->pv = 100;
  std::cout << this->name << " takes a potion" << std::endl;
}
