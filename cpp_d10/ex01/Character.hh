//
// Character.hh for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 15:30:09 2017 clement xia
// Last update Fri Jan 13 22:51:27 2017 clement xia
//

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

# include <string>
# include <iostream>
# include "AWeapon.hh"
# include "AEnemy.hh"

class	Character
{
private:
  std::string	name;
  int		ap;
  AWeapon	*aweapon;

public:
  Character(std::string const& name);
  ~Character();

  void			recoverAP();
  void			equip(AWeapon*);
  void			attack(AEnemy*);
  std::string const&	getName() const;
  int			getAP() const;
  AWeapon		*getAWeapon() const;
};

std::ostream&		operator<<(std::ostream& os, Character& character);

#endif /* !CHARACTER_HH_ */
