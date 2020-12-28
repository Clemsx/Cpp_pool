//
// Paladin.hh for d09_ex03 in /home/clemsx/CPP/Pool/cpp_d09/ex03
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 19:43:42 2017 clement xia
// Last update Thu Jan 12 23:27:08 2017 clement xia
//

#ifndef PALADIN_HH_
# define PALADIN_HH_

# include <string>
# include <iostream>
# include "Warrior.hh"
# include "Priest.hh"

class Paladin: virtual public Warrior, virtual public Priest
{
 public:
  Paladin(const std::string &, int);
  ~Paladin();

  void	RestorePower();
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  int	Intercept();
};

#endif /* !PALADIN_HH_ */
