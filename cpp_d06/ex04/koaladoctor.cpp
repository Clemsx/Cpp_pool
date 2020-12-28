//
// koaladoctor.cpp for d06_ex04 in /home/clemsx/CPP/Pool/cpp_d06/ex03
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan  9 20:30:21 2017 clement xia
// Last update Mon Jan  9 23:40:00 2017 clement xia
//

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  this->_name_ = name;
  this->_stat_ = false;

  std::cout << "Dr. " << this->_name_ << ": Je suis le Dr." << this->_name_ << "! Comment Kreoggez-vous ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{}

void	KoalaDoctor::diagnose(SickKoala *pat)
{
  std::string	drugs[] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'eucalyptus"};
  std::string	file = pat->getName() + ".report";
  std::ofstream files(file.c_str(), std::ios::out);

  std::cout << "Dr. " << this->_name_ << ": Alors, qu'est-ce qui vous goerk Mr." << pat->getName() << " ?" << std::endl;
  pat->poke();
  if (files)
    {
      files << drugs[random() % 5] << std::endl;
      files.close();
    }
}

void	KoalaDoctor::timeCheck()
{
  if (this->_stat_)
    std::cout << "Dr." << this->_name_ << ": Je rentre dans ma foret d'eucalyptus!" << std::endl;
  else
    std::cout << "Dr." << this->_name_ << ": Je commence le travail!" << std::endl;
  this->_stat_ = !this->_stat_;
}
