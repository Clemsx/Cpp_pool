//
// SuperMutant.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 15:16:40 2017 clement xia
// Last update Fri Jan 13 23:01:19 2017 clement xia
//

#include <string>
#include <iostream>
#include "SuperMutant.hh"

SuperMutant::SuperMutant()
  : AEnemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(){
  std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int d)
{
  AEnemy::takeDamage(d - 3);
}
