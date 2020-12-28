/*
** Woody.h for d13_ex02 in /home/clemsx/CPP/Pool/cpp_d13/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan 16 17:54:29 2017 clement xia
** Last update Mon Jan 16 18:03:37 2017 clement xia
*/

#ifndef WOODY_H_
# define WOODY_H_

# include <string>
# include <iostream>
# include "Toy.h"

class	Woody : public Toy
{
 public:
  Woody(const std::string, const std::string filename = "woody.txt");
  ~Woody();

  void	speak(const std::string);
};

#endif	/* !WOODY_H_ */
