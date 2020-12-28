//
// PlasmaRifle.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:30:55 2017 clement xia
// Last update Fri Jan 13 22:52:43 2017 clement xia
//

#include <string>
#include <iostream>
#include "PlasmaRifle.hh"

PlasmaRifle::PlasmaRifle()
  : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle(){
}

void	PlasmaRifle::attack() const{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
