/*
** Parts.h for d07a_ex01 in /home/clemsx/CPP/Pool/cpp_d07a/ex01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 10 18:18:49 2017 clement xia
** Last update Wed Jan 11 09:00:05 2017 clement xia
*/

#ifndef PARTS_H__
# define PARTS_H__

# include <string>
# include <iostream>

class Arms {
 private:
  std::string	_serial;
  bool		_functionnal;

 public:
  Arms(std::string serial = "A-01", bool functionnal = true);

  std::string serial();
  bool isFunctionnal();
  void informations();
};

class Legs {
 private:
  std::string	_serial;
  bool		_functionnal;

 public:
  Legs(std::string serial = "L-01", bool functionnal = true);

  std::string serial();
  bool isFunctionnal();
  void informations();
};

class Head {
 private:
  std::string	_serial;
  bool		_functionnal;
	
 public:
  Head(std::string serial = "H-01", bool functionnal = true);

  std::string serial();
  bool isFunctionnal();
  void informations();
};

#endif
