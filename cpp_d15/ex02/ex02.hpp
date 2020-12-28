//
// ex02.hpp for d15_ex02 in /home/clemsx/CPP/Pool/cpp_d15/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 18 10:23:11 2017 clement xia
// Last update Wed Jan 18 10:55:30 2017 clement xia
//

#include <iostream>
#include <string>

template <typename X>
X min(X a, X b)
{
  std::cout << "template min" << std::endl;
  if (a > b)
    return b;
  return a;
}

int min(int a, int b)
{
  std::cout << "non-template min" << std::endl;
  if (a > b)
    return b;
  return a;
}

template <typename A>
A	templateMin(A *arr, int size)
{
  int	i = 1;
  A	j;

  j = arr[0];
  while (i < size)
    {
      j = min<A>(j, arr[i]);
      i++;
    }
  return (j);
}

int	nonTemplateMin(int *arr, int size)
{
  int	i = 1;
  int	j;

  j = arr[0];
  while (i < size)
    {
      j = min(j, arr[i]);
      i++;
    }
  return (j);
}
