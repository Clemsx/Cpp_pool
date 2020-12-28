//
// AEnemy.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:54:23 2017 clement xia
// Last update Fri Jan 13 22:33:05 2017 clement xia
//

#include <string>
#include <iostream>
#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const& type)
  : hp(hp), type(type)
{}

AEnemy::~AEnemy(){
}

std::string const&	AEnemy::getType() const{
  return (this->type);
}

int			AEnemy::getHP() const{
  return (this->hp);
}

void			AEnemy::takeDamage(int d){
  if (d > 0)
    this->hp -= d;
}
