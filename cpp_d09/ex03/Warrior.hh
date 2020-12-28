//
// Warrior.hh for d09_ex01 in /home/clemsx/CPP/Pool/cpp_d09/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 16:04:36 2017 clement xia
// Last update Thu Jan 12 23:17:17 2017 clement xia
//

#ifndef WARRIOR_HH_
# define WARRIOR_HH_

# include <string>
# include <iostream>
# include "Character.hh"

class	Warrior: virtual public Character
{
private:
  std::string	weaponName;
  
public:
  Warrior(const std::string &, int, std::string wN = "hammer");
  ~Warrior();
  int	CloseAttack();
  int	RangeAttack();
};

#endif	/* !WARRIOR_HH_ */ 
