//
// PowerFist.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:41:37 2017 clement xia
// Last update Fri Jan 13 23:02:15 2017 clement xia
//

#include <string>
#include <iostream>
#include "PowerFist.hh"

PowerFist::PowerFist()
  :AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist(){
}

void	PowerFist::attack() const{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
