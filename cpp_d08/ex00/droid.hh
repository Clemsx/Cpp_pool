//
// droid.hh for d08_ex00 in /home/clemsx/CPP/Pool/cpp_d08/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 11 11:56:41 2017 clement xia
// Last update Thu Jan 12 08:53:06 2017 clement xia
//

#ifndef DROID_HH_
# define DROID_HH_

# include <iostream>
# include <string>

class	Droid
{
private:
  std::string		Id;
  std::size_t		Energy;
  std::size_t const	Attack;
  std::size_t const	Toughness;
  std::string		*Status;

public:
  Droid(std::string m = "");
  Droid(Droid const& d);
  ~Droid();

  std::string		getId() const;
  std::size_t		getEnergy() const;
  std::size_t		getAttack() const;
  std::size_t		getToughness() const;
  std::string	       	*getStatus() const;
  void			setId(std::string const id);
  void	       		setEnergy(std::size_t const energy);  
  void			setStatus(std::string *status);
  bool			operator==(Droid const &droid) const;
  bool			operator!=(Droid const &droid) const;
  Droid&		operator=(Droid const &droid);
  Droid&		operator<<(std::size_t &e);
};

std::ostream&		operator<<(std::ostream &os, Droid const &droid);

#endif /* !DROID_HH_ */
