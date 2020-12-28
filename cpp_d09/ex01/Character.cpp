//
// Character.cpp for d09_ex00 in /home/clemsx/CPP/Pool/cpp_d09/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 14:12:11 2017 clement xia
// Last update Thu Jan 12 17:16:29 2017 clement xia
//

#include <iostream>
#include <string>
#include "Character.hh"

Character::Character(const std::string &name, int lvl)
  : Range(CLOSE), name(name), lvl(lvl), pv(100), power(100),
    strength(5), stamina(5), intel(5), spirit(5), agility(5)
{
  std::cout << name << " Created" << std::endl;
}

Character::~Character(){
}

const std::string	&Character::getName() const{
  return (this->name);
}

int			Character::getLvl() const{
  return (this->lvl);
}

int			Character::getPv() const{
  return (this->pv);
}

int			Character::getPower() const{
  return (this->power);
}

int			Character::CloseAttack(){
  if (this->power > 10)
    {
      power -= 10;
      std::cout << this->name << " strikes with a wood stick" << std::endl;
      return (this->strength + 10);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}

int			Character::RangeAttack(){
  if (this->power > 10)
    {
      this->power -= 10;
      std::cout << this->name << " launches a stone" << std::endl;
      return (this->strength + 5);
    }
  std::cout << this->name << " out of power" << std::endl;
  this->power = 0;
  return (0);
}

void			Character::Heal(){
  if (this->pv <= 50)
    this->pv += 50;
  else
    this->pv = 100;
  std::cout << this->name << " takes a potion" << std::endl;
}

void			Character::RestorePower(){
  this->power = 100;
  std::cout << this->name << " eats" << std::endl;
}

void			Character::TakeDamage(int d){
  this->pv -= d;
  if (this->pv > 0)
    std::cout << this->name << " takes " << d << " damage" << std::endl;
  else
    std::cout << this->name << " out of combat" << std::endl;
}

/*
int	main()
{
  Character c("poney", 42);

  c.TakeDamage(50);
  c.TakeDamage(200);
  c.TakeDamage(200);
}
*/
