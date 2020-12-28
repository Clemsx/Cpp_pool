/*
** Skat.h for d07a_ex00 in /home/clemsx/CPP/Pool/cpp_d07a
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 10 17:50:18 2017 clement xia
** Last update Wed Jan 11 09:06:38 2017 clement xia
*/

#ifndef SKAT_H_
# define SKAT_H_

# include <string>
# include <iostream>

class	Skat {
 private:
  std::string	const& _name;
  int		_stimPacks;
  
 public:
  Skat(std::string const& name, int stimPacks);
  Skat();
  ~Skat();
  
  int	stimPaks();
  std::string const& name();	
  void shareStimPaks(int number, int stock);
  void addStimPaks(unsigned int number);
  void useStimPaks();
  void status();
};

#endif 
