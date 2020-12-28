//
// PowerFist.hh for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:38:30 2017 clement xia
// Last update Fri Jan 13 22:54:52 2017 clement xia
//

#ifndef POWERFIST_HH_
# define POWERFIST_HH_

# include <string>
# include <iostream>
# include "AWeapon.hh"

class	PowerFist: public AWeapon
{
public:
  PowerFist();
  virtual ~PowerFist();

  virtual void	attack() const;
};

#endif /* !POWERFIST_HH_ */
