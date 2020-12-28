//
// ex01.hpp for d15_ex01 in /home/clemsx/CPP/Pool/cpp_d15/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 18 10:05:37 2017 clement xia
// Last update Wed Jan 18 10:18:35 2017 clement xia
//

#include <string>
#include <iostream>

template <typename C>
int	compare(C const &a, C const &b)
{
  if (a < b)
    return (-1);
  if (a > b)
    return (1);
  return (0);
}
