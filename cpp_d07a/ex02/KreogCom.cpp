//
// KreogCom.cpp for d07a_ex02 in /home/clemsx/CPP/Pool/cpp_d07a/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 20:54:40 2017 clement xia
// Last update Tue Jan 10 21:44:08 2017 clement xia
//

#include <string>
#include <iostream>
#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial) {
  this->_x = x;
  this->_y = y;
  this->_serial = serial;
  this->next = 0;
  std::cout << "KreogCom " << this->_serial << " initialised" << std::endl;
}

KreogCom::~KreogCom() {
  std::cout << "KreogCom " << this->_serial << " shutting down" << std::endl;
}

void	KreogCom::addCom(int x, int y, int serial) {
  KreogCom *next = new KreogCom(x, y, serial);
  next->next = this->next;
  this->next = next;
}

KreogCom	*KreogCom::getCom() {
  return (next);
}

void	KreogCom::removeCom() {
  KreogCom *d;
  
  if (next)
    {
      d = this->next;
      //      this->next = next;
      delete d;
    }
}

void	KreogCom::ping(){
  std::cout << "KreogCom " << _serial << " currently at " << _x << " " << _y << std::endl;
}

void	KreogCom::locateSquad(){
  if (next)
    next->locateSquad();
  ping();
}

int	main()
{
  KreogCom k(42, 42, 101010);
  k.addCom(56, 25, 65);
  k.addCom(73, 34, 51);

  k.locateSquad();

  k.removeCom();
  k.removeCom();
  return (0);
}
