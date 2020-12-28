//
// droid.cpp for d08_ex00 in /home/clemsx/CPP/Pool/cpp_d08/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 11 11:56:50 2017 clement xia
// Last update Wed Jan 11 23:46:30 2017 clement xia
//

#include <stdlib.h>
#include <string>
#include <iostream>
#include "droid.hh"
#include "droidmemory.hh"

/*
** CLASS : DROID
*/

Droid::Droid(Droid const& d)
  : Id(d.Id), Energy(d.Energy), Attack(d.Attack), Toughness(d.Toughness),
    Status(new std::string(*(d.Status)))
{
  std::cout << "Droid " << d.Id << " Activated, Memory Dumped" << std::endl;
}

Droid::Droid(std::string id)
  : Id(id), Energy(50), Attack(25), Toughness(15),
    Status(new std::string("Standing by"))
{
  std::cout << "Droid '" << this->Id << "' Activated" << std::endl;
}

Droid::~Droid(){
  delete this->Status;
  std::cout << "Droid '" << this->Id << "' Destroyed" << std::endl;
}

/*
** GET
*/
std::string		Droid::getId() const{
  return (this->Id);
}

std::size_t		Droid::getEnergy() const{
  return (this->Energy);
}

std::size_t		Droid::getAttack() const{
  return (this->Attack);
}

std::size_t		Droid::getToughness() const{
  return (this->Toughness);
}

std::string		*Droid::getStatus() const{
  return (this->Status);
}

DroidMemory		*Droid::getBattleData() const{
  return (this->BattleData);
}

/*
** SET
*/
void	Droid::setId(std::string const id){
  this->Id = id;
}

void	Droid::setEnergy(std::size_t const energy){
  if (energy > 100)
    this->Energy = 100;
  else
    this->Energy = energy;
}

void	Droid::setStatus(std::string *status){
  delete this->Status;
  this->Status = status;
}

bool	Droid::operator==(Droid const &d) const{
  if (this->Id == d.Id && this->Energy == d.Energy &&
      this->Attack == d.Attack && this->Toughness == d.Toughness &&
      *(this->Status) == *(d.Status))
    return (true);
  return (false);
}

bool	Droid::operator!=(Droid const &d) const{
  if (this->Id == d.Id && this->Energy == d.Energy &&
      this->Attack == d.Attack && this->Toughness == d.Toughness &&
      *(this->Status) == *(d.Status))
    return (false);
  return (true);
}

Droid&	Droid::operator=(Droid const &droid){
  if(this != &droid)
    {
      this->Id = droid.Id;
      this->Energy = droid.Energy;
      this->Status = new std::string(*(droid.Status));
    }
  return (*this);
}

std::ostream&	operator<<(std::ostream &ost, Droid const &droid){
  ost << "Droid '" << droid.getId() << "', " << (*droid.getStatus()) << ", " << droid.getEnergy();
  return (ost);
}

Droid&	Droid::operator<<(std::size_t &e){
  std::size_t	nb;
  
  nb = 100 - this->Energy;
  if (e > nb)
    {
      this->Energy += nb;
      e -= nb;
    }
  else
    {
      this->Energy += e;
      e = 0;
    }
  return (*this);
}

void	Droid::setBattleData(DroidMemory *memo){
  this->BattleData = memo;
}
