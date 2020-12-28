//
// RadScorpion.cpp for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 15:26:08 2017 clement xia
// Last update Fri Jan 13 22:55:37 2017 clement xia
//

#include <string>
#include <iostream>
#include "RadScorpion.hh"

RadScorpion::RadScorpion()
  : AEnemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(){
  std::cout << "* SPROTCH *" << std::endl;
}
