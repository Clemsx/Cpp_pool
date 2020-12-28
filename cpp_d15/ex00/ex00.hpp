//
// ex00.hpp for d15_ex00 in /home/clemsx/CPP/Pool/cpp_d15/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 18 09:39:39 2017 clement xia
// Last update Wed Jan 18 10:04:26 2017 clement xia
//

#include <string>
#include <iostream>

template <typename Ti>
void swap(Ti &a, Ti &b)
{
  Ti x;
  x = a;
  a = b;
  b = x;
}

template <typename Min>
Min min(Min a, Min b)
{
  if (a < b)
    return a;
  return b;
}

template <typename Max>
Max max(Max a, Max b)
{
  if (a > b)
    return a;
  return b;
}

template <typename Add>
Add add(Add a, Add b)
{
  return a + b;
}
