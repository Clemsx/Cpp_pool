//
// Cesar.cpp for d17_ex02 in /home/clemsx/CPP/Pool/cpp_d17/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 20 12:01:50 2017 clement xia
// Last update Fri Jan 20 13:03:33 2017 clement xia
//

#include "Cesar.h"

Cesar::Cesar()
{
  this->index = 3;
}

Cesar::~Cesar()
{}

void	Cesar::encryptChar(char plainchar)
{
  if (std::isalpha(plainchar))
    {
      if (plainchar >= 97)
	{
	  plainchar = (plainchar - 97 + this->index) % 26 + 97;
	}
      else
	{
	  plainchar = (plainchar - 65 + this->index) % 26 + 65;
	}
    }
  this->index = (this->index + 1) % 26;
  std::cout << plainchar;
}

void	Cesar::decryptChar(char cipherchar)
{
  if (std::isalpha(cipherchar))
    {
      if (cipherchar >= 97)
	{
	  cipherchar = ((cipherchar - 122 - this->index) % 26 + 122);
	}
      else
	{
	  cipherchar = ((cipherchar - 90 - this->index) % 26 + 90);
	}
    }
  this->index = (this->index + 1) % 26;
  std::cout << cipherchar;
}

void	Cesar::reset()
{
  this->index = 3;
}
