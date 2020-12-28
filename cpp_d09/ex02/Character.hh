//
// Character.hh for d09_ex00 in /home/clemsx/CPP/Pool/cpp_d09/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Thu Jan 12 14:12:00 2017 clement xia
// Last update Thu Jan 12 17:16:39 2017 clement xia
//

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

# include <string>
# include <iostream>

class	Character
{
public:
  enum		AttackRange
    {
      CLOSE,
      RANGE
    };
  AttackRange	Range;
  
protected:
  std::string	name;
  std::string	race;
  int		lvl;
  int		pv;
  int		power;

  int		strength;
  int		stamina;
  int		intel;
  int		spirit;
  int		agility;
  
public:
  Character(const std::string &, int);
  ~Character();

  const std::string	&getName() const;
  int			getLvl() const;
  int			getPv() const;
  int			getPower() const;

  int			CloseAttack();
  int			RangeAttack();
  void			Heal();
  void			RestorePower();
  void			TakeDamage(int _damage);
};

#endif	/* !CHARACTER_HH_ */
