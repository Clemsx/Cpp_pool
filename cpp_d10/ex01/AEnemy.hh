//
// AEnemy.hh for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 14:49:43 2017 clement xia
// Last update Fri Jan 13 22:30:56 2017 clement xia
//

#ifndef AENEMY_HH_
# define AENEMY_HH_

# include <string>
# include <iostream>

class	AEnemy
{
private:
  int		hp;
  std::string	type;

public:
  AEnemy(int hp, std::string const& type);
  
  virtual ~AEnemy();

  std::string const&	getType() const;
  int			getHP() const;

  virtual void		takeDamage(int);
};

#endif /* !AENEMY_HH_ */
