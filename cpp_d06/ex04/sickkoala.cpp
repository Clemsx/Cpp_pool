//
// sickkoala.cpp for d06_ex02 in /home/clemsx/CPP/Pool/cpp_d06/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan  9 14:30:32 2017 clement xia
// Last update Mon Jan  9 20:47:21 2017 clement xia
//

#include <iomanip>
#include <string>
#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include "sickkoala.h"

static bool	case_sens(std::string l1, std::string l2)
{
  int	i;
  bool	v;
  char	le1;
  char	le2;

  v = true;
  i = 0;
  do
    {
      le1 = l1[i] >= 'A' && l1[i] <= 'Z' ? l1[i] + 32 : l1[i];
      le2 = l2[i];
      v = le1 == le2;
      i++;
    } while (v && l1[i] != 0 && l2[i] != 0);
  return (v);
}

SickKoala::SickKoala(std::string name)
{
  this->_name_ = name;  
}

SickKoala::~SickKoala()
{
  std::cout << "Mr. " << this->_name_ << ": Kreooogg!! Je suis gueriiii!" << std::endl;
}

void	SickKoala::poke()
{
  std::cout << "Mr. " << this->_name_ << ": Gooeeeeerrk!! :'(" << std::endl;
}

bool	SickKoala::takeDrug(std::string drug)
{
  if (case_sens(drug, "mars"))
    {
      std::cout << "Mr. " << this->_name_ << ": Mars, et ca kreog!" << std::endl;
      return (true);
    }
  else if (drug == "Buronzand")
    {
      std::cout << "Mr. " << this->_name_ << ": Et la fatigue a fait son temps!" << std::endl;
      return (true);
    }
  else
    {
      std::cout << "Mr. " << this->_name_ << ": Goerkreog!" << std::endl;
      return (false);
    }
}

void	SickKoala::overDrive(std::string fever)
{
  std::size_t pat;

  pat = 0;
  while ((pat = fever.find("Kreog!")) != std::string::npos)
    {
      fever.replace(pat, 7, "1337!");
    }
  std::cout << "Mr. " << this->_name_ << ": " << fever << std::endl;
}

std::string	SickKoala::getName()
{
  return (this->_name_);
}
