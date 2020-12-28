//
// ex03.hpp for d15_ex03 in /home/clemsx/CPP/Pool/cpp_d15/ex03
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 18 11:04:54 2017 clement xia
// Last update Wed Jan 18 15:51:59 2017 clement xia
//

#include <string>
#include <iostream>

template <typename P>
void	print(const P& elem)
{
  std::cout << elem << std::endl;
}

template <typename F>
void foreach(F *tab, void (&print)(const F& elem), int size)
{
  int x = 0;
  while (x < size)
    {
      print(tab[x]);
      x++;
    }
}
