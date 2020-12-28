//
// SuperMutant.hh for d10_ex01 in /home/clemsx/CPP/Pool/cpp_d10/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 15:11:16 2017 clement xia
// Last update Fri Jan 13 22:56:32 2017 clement xia
//

#ifndef SUPERMUTANT_HH_
# define SUPERMUTANT_HH_

# include <string>
# include <iostream>
# include "AEnemy.hh"

class	SuperMutant : public AEnemy
{
public:
  SuperMutant();
  virtual ~SuperMutant();

  virtual void	takeDamage(int);
};

#endif /* !SUPERMUTANT_HH_ */
