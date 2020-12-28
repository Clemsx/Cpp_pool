//
// koalanurse.cpp for d06_ex03 in /home/clemsx/CPP/Pool/cpp_d06/ex03
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan  9 19:47:59 2017 clement xia
// Last update Tue Jan 10 07:20:10 2017 clement xia
//

#include <iomanip>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int id)
{
  this->_id_ = id;
  this->_stat_ = false;
}

KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << this->_id_ << ": Enfin un peu de repos!" << std::endl;
}

void	KoalaNurse::giveDrug(std::string medic, SickKoala *koala)
{
  if (koala != NULL)
    koala->takeDrug(medic);
}

std::string	KoalaNurse::readReport(std::string filename)
{
  std::string	drugs;
  std::fstream	file;
  std::size_t		is_ok;

  is_ok = filename.find(".report");
  if (is_ok == std::string::npos && filename.substr(is_ok).compare(".report") != 0)
    return (drugs);
  file.open(filename.c_str());
  if (!file.is_open())
    return (drugs);
  getline(file, drugs, '\0');
  filename.resize(filename.size() - 7);
  std::cout << "Nurse " << this->_id_ << ": Kreog! Il faut donner un " << drugs << " a Mr." << filename << "!" << std::endl;
  file.close();
  return (drugs);
}


void	KoalaNurse::timeCheck()
{
  if (this->_stat_)
    std::cout << "Nurse " << this->_id_ << ": Je rentre dans ma foret d'eucalyptus!" << std::endl;
  else
    std::cout << "Nurse " << this->_id_ << ": Je commence le travail!" << std::endl;
  this->_stat_ = !this->_stat_;
}
