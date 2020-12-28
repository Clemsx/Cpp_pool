//
// Victim.hh for d10_ex00 in /home/clemsx/CPP/Pool/cpp_d10/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 13 10:56:39 2017 clement xia
// Last update Fri Jan 13 13:30:15 2017 clement xia
//

#ifndef VICTIM_HH_
# define VICTIM_HH_

# include <string>
# include <iostream>

class	Victim
{
protected:
  std::string	name;

public:
  Victim(std::string);
  ~Victim();

  virtual std::string	getName() const;
  virtual void		getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, Victim& victim);

#endif /* !VICTIM_HH_ */
