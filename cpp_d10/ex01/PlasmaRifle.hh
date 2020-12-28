//
// PlasmaRifle.hh for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:25:30 2017 clement xia
// Last update Fri Jan 13 22:53:03 2017 clement xia
//

#ifndef PLASMARIFLE_HH_
# define PLASMARIFLE_HH_

# include <string>
# include <iostream>
# include "AWeapon.hh"

class	PlasmaRifle: public AWeapon
{
public:
  PlasmaRifle();
  virtual ~PlasmaRifle();

  virtual void	attack() const;
};

#endif /* !PLASMARIFLE_HH_ */
