/*
** OneTime.h for d17_ex02 in /home/clemsx/CPP/Pool/cpp_d17/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Jan 20 13:06:11 2017 clement xia
** Last update Fri Jan 20 14:48:31 2017 clement xia
*/

#ifndef ONETIME_H_
# define ONETIME_H_

# include <string>
# include <iostream>
# include "IEncryptionMethod.h"

class	OneTime : public IEncryptionMethod
{
 private:
  int		index;
  std::string	key;
  
 public:
  OneTime(std::string const& key);
  virtual ~OneTime();

  virtual void encryptChar(char plainchar);
  virtual void decryptChar(char cipherchar);
  virtual void reset();
};

#endif	/* !ONETIME_H_ */
