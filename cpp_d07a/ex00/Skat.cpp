//
// Skat.cpp for d07a_ex00 in /home/clemsx/CPP/Pool/cpp_d07a/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 17:52:06 2017 clement xia
// Last update Wed Jan 11 09:07:51 2017 clement xia
//

#include <iostream>
#include <string>
#include "Skat.h"

Skat::Skat(std::string const& name, int stimPacks) : _name(name), _stimPacks(stimPacks){
}

Skat::Skat(){
  this->_name = "bob";
  this->_stimPacks = 15;
}

Skat::~Skat() {
}

int Skat::stimPaks() {
  return _stimPacks;
}

std::string const& Skat::name() {
  return _name;
}

void	Skat::shareStimPaks(int number, int st) {
  if (number <= _stimPacks)
    {
      st += number;
      _stimPacks -= number;
      std::cout << "Keep the change." << std::endl;
    }
  else
    {
      std::cout << "Don't be greedy" << std::endl;
    }
}

void	Skat::addStimPaks(unsigned int number) {
  if (!_stimPacks) {
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  }
  _stimPacks += number;
}

void	Skat::useStimPaks() {
  if (_stimPacks > 0) {
    _stimPacks--;
    std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
  }
  else {
    std::cout << "Mediiiiiic" << std::endl;
  }
}

void	Skat::status(){
  std::cout << "Soldier " << this->_name << " reporting " << this->_stimPacks << " stimpaks remaining sir !" << std::endl;
}
