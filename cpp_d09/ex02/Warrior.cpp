//
// Warrior.cpp for d09_ex01 in /home/clemsx/CPP/Pool/cpp_d09/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 16:04:23 2017 clement xia
// Last update Fri Jan 13 08:46:21 2017 clement xia
//

#include <string>
#include <iostream>
#include "Warrior.hh"

Warrior::Warrior(const std::string &name, int lvl, std::string weaponName)
  : Character(name, lvl), weaponName(weaponName)
{
  this->strength = 12;
  this->stamina = 12;
  this->intel = 6;
  this->spirit = 5;
  this->agility = 7;
  std::cout << "I'm " << name;
  std::cout << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior(){
}

int	Warrior::CloseAttack(){
  if (this->power >= 30)
    {
      this->power -= 30;
      std::cout << this->name << " strikes with his " << this->weaponName;
      std::cout << std::endl;
      return (this->strength + 20);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}

int	Warrior::RangeAttack(){
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

/*
int	main()
{
  Warrior w("jimmy", 42, "bamboo");

  w.CloseAttack();
  w.TakeDamage(50);
  w.Heal();
  w.TakeDamage(24);
  return (0);
}
*/
