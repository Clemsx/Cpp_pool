//
// Sorcerer.hh for d10_ex00 in /home/clemsx/CPP/Pool/cpp_d10/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 10:56:08 2017 clement xia
// Last update Fri Jan 13 13:09:46 2017 clement xia
//

#ifndef SORCERER_HH_
# define SORCERER_HH_

# include <string>
# include <iostream>
# include "Victim.hh"

class	Sorcerer
{
private:
  std::string	name;
  std::string	title;

public:
  Sorcerer(std::string, std::string);
  ~Sorcerer();

  std::string	getName() const;
  std::string	getTitle() const;
  virtual void	polymorph(Victim const&) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer& sorcerer);

#endif /* !SORCERER_HH_ */
