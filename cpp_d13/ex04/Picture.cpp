//
// Picture.cpp for d13_ex00 in /home/clemsx/CPP/Pool/cpp_d13/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan 16 11:26:35 2017 clement xia
// Last update Tue Jan 17 09:00:20 2017 clement xia
//

#include <iostream>
#include <fstream>
#include "Picture.h"


Picture::Picture()
{
  this->data = "";
}

Picture::Picture(const Picture& p)
{
  this->data = p.data;
}

Picture::Picture(const std::string& file)
{
  getPictureFromFile(file);
}

Picture::~Picture(){
}

bool	Picture::getPictureFromFile(const std::string& file)
{
  std::ifstream files(file.c_str());
  std::string	str;

  if (files.is_open())
    {
      while (std::getline(files, str, '\0'))
	this->data += str;
      return (true);
    }
  this->data = "ERROR";
  return (false);
}

Picture&	Picture::operator=(const Picture& pic)
{
  this->data = pic.data;
  return (*this);
}
