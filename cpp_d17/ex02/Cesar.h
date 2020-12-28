/*
** Cesar.h for d17_ex02 in /home/clemsx/CPP/Pool/cpp_d17/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan 20 11:54:09 2017 clement xia
** Last update Fri Jan 20 12:01:30 2017 clement xia
*/

#ifndef CESAR_H_
# define CESAR_H_

# include <string>
# include <iostream>
# include "IEncryptionMethod.h"

class Cesar : public IEncryptionMethod
{
 private:
  int	index;
 public:
  Cesar();
  virtual ~Cesar();

  virtual void encryptChar(char plainchar);
  virtual void decryptChar(char cipherchar);
  virtual void reset();
};

#endif	/* !CESAR_H_ */
