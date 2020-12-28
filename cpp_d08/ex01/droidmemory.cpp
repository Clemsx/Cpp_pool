//
// droidmemory.cpp for d08_ex01 in /home/clemsx/CPP/Pool/cpp_d08/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 11 15:58:15 2017 clement xia
// Last update Wed Jan 11 23:46:09 2017 clement xia
//

#include <stdlib.h>
#include <iostream>
#include <string>
#include "droidmemory.hh"
#include "droid.hh"

DroidMemory::DroidMemory()
{
  this->FingerPrint = random();
  this->Exp = 0;
}

DroidMemory::~DroidMemory(){
}

std::size_t	DroidMemory::getFingerPrint() const{
  return (this->FingerPrint);
}

std::size_t	DroidMemory::getExp() const{
  return (this->Exp);
}

void		DroidMemory::setExp(std::size_t exp)
{
  this->Exp = exp;
}

void		DroidMemory::setFingerPrint(std::size_t fp)
{
  this->FingerPrint = fp;
}

std::ostream	&operator<<(std::ostream &os, DroidMemory const &memo){
  os << "DroidMemory '" << memo.getFingerPrint() << "', " << memo.getExp();
  return (os);
}

DroidMemory	&DroidMemory::operator<<(DroidMemory const &memo){
  this->Exp += memo.getExp();
  this->FingerPrint += memo.getFingerPrint();
  return (*this);
}

DroidMemory	&DroidMemory::operator>>(DroidMemory &memo){
  memo.Exp += this->Exp;
  memo.FingerPrint += this->FingerPrint;
  return (*this);
}

DroidMemory	&DroidMemory::operator+=(DroidMemory const &memo){
  this->Exp += memo.getExp();
  this->FingerPrint += memo.getFingerPrint();
  return (*this);
}

DroidMemory	&DroidMemory::operator+=(std::size_t nb){
  this->Exp += nb;
  this->FingerPrint += nb;
  return (*this);
}

DroidMemory	DroidMemory::operator+(std::size_t nb){
  DroidMemory	new_memo;

  new_memo.setExp(this->Exp + nb);
  new_memo.setFingerPrint(this->FingerPrint + nb);
  return (new_memo);
}

DroidMemory	DroidMemory::operator+(DroidMemory const &memo){
  DroidMemory	new_memo;

  new_memo.setExp(this->Exp + memo.getExp());
  new_memo.setFingerPrint(this->FingerPrint + memo.getFingerPrint());
  return (new_memo);
}
