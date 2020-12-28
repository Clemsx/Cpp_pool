//
// Parts.cpp for d07a_ex01 in /home/clemsx/CPP/Pool/cpp_d07a/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 18:19:01 2017 clement xia
// Last update Wed Jan 11 08:59:23 2017 clement xia
//

#include <string>
#include <iostream>
#include "Parts.h"
#include "KoalaBot.h"

/*
** ARMS
*/

Arms::Arms(std::string serial, bool functionnal) {
	this->_serial = serial;
	this->_functionnal = functionnal;
}

std::string	Arms::serial(){
  return (this->_serial);
}

bool	Arms::isFunctionnal(){
  return (this->_functionnal);
}

void	Arms::informations(){
	std::cout << "\t[Parts] Arms " << _serial << " status : " << (_functionnal ? "OK" : "KO") << std::endl;
}

/*
** LEGS
*/

Legs::Legs(std::string serial, bool functionnal) {
	this->_serial = serial;
	this->_functionnal = functionnal;
}

std::string Legs::serial(){
  return (this->_serial);
}

bool Legs::isFunctionnal(){
  return (this->_functionnal);
}
void Legs::informations(){
	std::cout << "\t[Parts] Legs " << _serial << " status : " << (_functionnal ? "OK" : "KO") << std::endl;
}

/*
** HEAD
*/
Head::Head(std::string serial, bool functionnal) {
	this->_serial = serial;
	this->_functionnal = functionnal;
}

std::string Head::serial(){
  return (this->_serial);
}

bool Head::isFunctionnal(){
  return (this->_functionnal);
}

void Head::informations(){
	std::cout << "\t[Parts] Head " << _serial << " status : " << (_functionnal ? "OK" : "KO") << std::endl;
}
