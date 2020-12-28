//
// ex04.cpp for d15_ex04 in /home/clemsx/CPP/Pool/cpp_d15/ex04
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 18 11:30:11 2017 clement xia
// Last update Wed Jan 18 15:50:52 2017 clement xia
//

#include <iostream>
#include "ex04.hpp"

template <typename T>
bool	equal(const T& x, const T& y)
{
  if (x == y)
    return (1);
  return (0);
}

template <typename T>
bool	Tester<T>::equal(const T& x, const T& y)
{
  if (x == y)
    return (1);
  return (0);
}

template bool	equal<std::string>(const std::string& x, const std::string& y);
template bool	equal<int>(const int& x, const int& y);
template bool	equal<float>(const float& x, const float& y);
template bool	equal<double>(const double& x, const double& y);

template bool	Tester<std::string>::equal(const std::string& x, const std::string& y);
template bool	Tester<int>::equal(const int& x, const int& y);
template bool	Tester<float>::equal(const float& x, const float& y);
  template bool	Tester<double>::equal(const double& x, const double& y);

/*
int main()
{
  std::cout << "a == a ? " << equal("a","a") << std::endl;
  std::cout << "a == b ? " << equal("a", "b") << std::endl;
  std::cout << "1 == 0 ? " << equal(1, 0) << std::endl;
  std::cout << "1 == 1 ? " << equal(1, 1) << std::endl;
  Tester<int> iT;
  std::cout << "41 == 42 ? " << iT.equal(41, 42) << std::endl;
  std::cout << "42 == 42 ? " << iT.equal(42, 42) << std::endl;
  return 0;
  }*/
