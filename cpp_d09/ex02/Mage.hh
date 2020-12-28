//
// Mage.hh for d09_ex02 in /home/clemsx/CPP/Pool/cpp_d09/ex02
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 18:04:03 2017 clement xia
// Last update Fri Jan 13 07:46:29 2017 clement xia
//

#ifndef MAGE_HH_
# define MAGE_HH_

# include <iostream>
# include "Character.hh"

class	Mage: public Character
{
public:
  Mage(const std::string &, int);
  ~Mage();

  int	CloseAttack();
  int	RangeAttack();
  void	RestorePower();
  void	Heal();
};

#endif	/* !MAGE_HH_ */ 
