//
// AWeapon.hh for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 13:35:07 2017 clement xia
// Last update Fri Jan 13 22:38:44 2017 clement xia
//

#ifndef AWEAPON_HH_
# define AWEAPON_HH_

# include <string>
# include <iostream>

class	AWeapon
{
private:
  std::string	name;
  int		apcost;
  int		damage;
  
public:
  AWeapon(std::string const &name, int apcost, int damage);
  virtual ~AWeapon();

  std::string const&	getName() const;
  int			getAPCost() const;
  int			getDamage() const;
  virtual void		attack() const = 0;
};

#endif /* !AWEAPON_HH_ */
