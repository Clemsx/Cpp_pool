//
// AWeapon.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:18:59 2017 clement xia
// Last update Fri Jan 13 22:35:37 2017 clement xia
//

#include <string>
#include <iostream>
#include "AWeapon.hh"

AWeapon::AWeapon(std::string const& name, int apcost, int damage)
  : name(name), apcost(apcost), damage(damage)
{}

AWeapon::~AWeapon(){
}

std::string const&	AWeapon::getName() const{
  return (this->name);
}

int			AWeapon::getAPCost() const{
  return (this->apcost);
}

int			AWeapon::getDamage() const{
  return (this->damage);
}

void			AWeapon::attack() const{}
