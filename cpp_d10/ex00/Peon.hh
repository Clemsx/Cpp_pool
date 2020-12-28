//
// Peon.hh for d10_ex00 in /home/clemsx/CPP/Pool/cpp_d10/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 10:57:02 2017 clement xia
// Last update Fri Jan 13 13:22:53 2017 clement xia
//

#ifndef PEON_HH_
# define PEON_HH_

# include <string>
# include <iostream>
# include "Victim.hh"

class	Peon : public Victim
{
public:
  Peon(std::string name);
  ~Peon();

  void	getPolymorphed() const;
};

#endif /* !PEON_HH_ */
