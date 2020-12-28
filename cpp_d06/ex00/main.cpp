//
// main.cpp for d06_ex00 in /home/clemsx/CPP/Pool/cpp_d06/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Mon Jan  9 10:19:53 2017 clement xia
// Last update Mon Jan  9 11:24:52 2017 clement xia
//

#include <fstream>
#include <iostream>

void	my_cat(char *file)
{
  std::ifstream files(file, std::ifstream::in);
  std::string str;

  if (files)
    {
      while (std::getline(files, str, '\0'))
	std::cout << str;
      files.close();
    }
  else
    std::cout << "my_cat: <" << file << " >: No such file or directory" << std::endl;
}

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac == 1)
    std::cout << "my_cat: Usage: ./my_cat file [...]" << std::endl;
  while (i < ac)
    my_cat(av[i++]);
  return (0);
}
