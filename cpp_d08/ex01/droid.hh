//
// droid.hh for d08_ex00 in /home/clemsx/CPP/Pool/cpp_d08/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 11 11:56:41 2017 clement xia
// Last update Thu Jan 12 08:55:13 2017 clement xia
//

#ifndef DROID_HH_
# define DROID_HH_

# include <string>
# include <iostream>
# include "droidmemory.hh"

class	Droid
{
private:
  std::string		Id;
  std::size_t		Energy;
  std::size_t const	Attack;
  std::size_t const	Toughness;
  std::string		*Status;
  DroidMemory		*BattleData;
  
public:
  Droid(std::string m = "");
  Droid(Droid const& d);
  ~Droid();

  std::string		getId() const;
  std::size_t		getEnergy() const;
  std::size_t		getAttack() const;
  std::size_t		getToughness() const;
  std::string	       	*getStatus() const;
  DroidMemory		*getBattleData() const;
  void			setId(std::string const id);
  void	       		setEnergy(std::size_t const energy);  
  void			setStatus(std::string *status);
  void			setBattleData(DroidMemory *droid);
  bool			operator==(Droid const &droid) const;
  bool			operator!=(Droid const &droid) const;
  Droid&		operator=(Droid const &droid);
  Droid&		operator<<(std::size_t &e);
};

std::ostream&		operator<<(std::ostream &os, Droid const &droid);

#endif /* !DROID_HH_ */
