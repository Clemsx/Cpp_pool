//
// Priest.hh for d09_ex02 in /home/clemsx/CPP/Pool/cpp_d09/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 18:16:35 2017 clement xia
// Last update Thu Jan 12 20:28:18 2017 clement xia
//

#ifndef	PRIEST_HH_
# define PRIEST_HH_

# include <iostream>
# include <string>
# include "Mage.hh"

class	Priest: public Mage
{
public:
  Priest(const std::string &, int);
  ~Priest();

  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
};

#endif	/* !PRIEST_HH_ */ 
