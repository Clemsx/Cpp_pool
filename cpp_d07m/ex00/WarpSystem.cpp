//
// WarpSystem.cpp for d07m_ex00 in /home/clemsx/CPP/Pool/cpp_d07m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 10:32:09 2017 clement xia
// Last update Tue Jan 10 12:39:13 2017 clement xia
//

#include <iostream>
#include <string>
#include "WarpSystem.hh"
#include "Federation.hh"

WarpSystem::QuantumReactor::QuantumReactor(){
  this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor(){
}

bool	WarpSystem::QuantumReactor::isStable(){
  if (this->_stability == true)
    return (true);
  else
    return (false);
}

void	WarpSystem::QuantumReactor::setStability(bool b){
  this->_stability = b;
}

WarpSystem::Core::Core(QuantumReactor *core){
  this->_coreReactor = core;
}

WarpSystem::Core::~Core(){  
}

WarpSystem::QuantumReactor    *WarpSystem::Core::checkReactor(){
  return (this->_coreReactor);
}
