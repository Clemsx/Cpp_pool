/*
** Buzz.h for d13_ex02 in /home/clemsx/CPP/Pool/cpp_d13/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan 16 17:50:16 2017 clement xia
** Last update Mon Jan 16 19:18:34 2017 clement xia
*/

#ifndef BUZZ_H_
# define BUZZ_H_

#include <string>
#include <iostream>
#include "Toy.h"

class	Buzz : public Toy
{
 public:
  Buzz(const std::string, const std::string filename = "buzz.txt");
  ~Buzz();

  void	speak(const std::string state);
  bool	speak_es(const std::string state);
};

#endif	/* !BUZZ_H_ */
