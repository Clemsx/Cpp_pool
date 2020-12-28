//
// OneTime.cpp for d17_ex02 in /home/clemsx/CPP/Pool/cpp_d17/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 20 14:11:38 2017 clement xia
// Last update Fri Jan 20 15:09:53 2017 clement xia
//

#include "OneTime.h"


OneTime::OneTime(std::string const& key)
{
  this->index = 0;
  this->key = key;
}

OneTime::~OneTime()
{}

void	OneTime::encryptChar(char plainchar)
{
  int x;
  int y;

  if (plainchar >= 97)
    x = 97;
  else
    x = 65;
  if (this->key[this->index] >= 97)
    y = 97;
  else
    y = 65;
  if (std::isalpha(plainchar))
    {
      plainchar = (plainchar - x + (this->key[this->index] - y)) % 26 + x;
    }
  this->index = (this->index + 1) % this->key.size();
  std::cout << plainchar;
}

void	OneTime::decryptChar(char cipherchar)
{
  int x;
  int y;

  if (cipherchar >= 97)
    x = 122;
  else
    x = 90;
  if (this->key[this->index] >= 97)
    y = 97;
  else
    y = 65;
  if (std::isalpha(cipherchar))
    {
      cipherchar = (cipherchar - x - (this->key[this->index] - y)) % 26 + x;
    }
  this->index = (this->index + 1) % this->key.size();
  std::cout << cipherchar;
}

void	OneTime::reset()
{
  this->index = 0;
}
