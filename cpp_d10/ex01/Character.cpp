//
// Character.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 15:36:36 2017 clement xia
// Last update Fri Jan 13 22:51:05 2017 clement xia
//

#include <string>
#include <iostream>
#include "Character.hh"

Character::Character(std::string const& name)
  : name(name), ap(40), aweapon(NULL)
{}

Character::~Character(){
}

void	Character::recoverAP(){
  this->ap += 10;
  if (this->ap > 40)
    this->ap = 40;
}

void	Character::equip(AWeapon *aw)
{
  this->aweapon = aw;
}

void	Character::attack(AEnemy *ae)
{
  if (ae && this->aweapon)
    {
      if (this->ap >= this->aweapon->getAPCost())
	{
	  this->ap -= this->aweapon->getAPCost();
	  std::cout << this->name << " attacks " << ae->getType();
	  std::cout << " with a " << aweapon->getName() << std::endl;
	  aweapon->attack();
	  ae->takeDamage(aweapon->getDamage());
	  if (ae->getHP() <= 0)
	    delete ae;
	}
    }
}

std::string const&	Character::getName() const{
  return (this->name);
}

int			Character::getAP() const{
  return (this->ap);
}

AWeapon			*Character::getAWeapon() const{
  return (this->aweapon);
}

std::ostream&		operator<<(std::ostream& os, Character& c)
{
  os << c.getName() << " has " << c.getAP() << " AP and ";
  if (c.getAWeapon())
    {
      os << "wields a " << c.getAWeapon()->getName();
    }
  else
    os << "is unarmed";
  os << std::endl;
  return os;
}
