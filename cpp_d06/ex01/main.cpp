//
// main.cpp for d06_ex01 in /home/clemsx/CPP/Pool/cpp_d06/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan  9 11:30:37 2017 clement xia
// Last update Mon Jan  9 14:28:56 2017 clement xia
//

#include <iostream>
#include <iomanip>

int	main(int ac, char **av)
{
  float temp;
  std::string fmt;

  std::cin >> temp >> fmt;
  if (fmt == "Fahrenheit")
    {
      std::cout << std::setw(16);
      std::cout << std::fixed << std::setprecision(3) << (5.0 / 9.0) * (temp - 32);
      std::cout << std::setw(16) << "Celsius" << std::endl;
    }
  else if (fmt == "Celsius")
    {
      std::cout << std::setw(16);
      std::cout << std::fixed << std::setprecision(3) << (temp * (9.0 / 5.0)) + 32;
      std::cout << std::setw(16) << "Fahrenheit" << std::endl;
    }
  else
    return (84);
  return (0);
}
