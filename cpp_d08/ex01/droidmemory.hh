//
// droidmemory.hh for d08_ex01 in /home/clemsx/CPP/Pool/cpp_d08/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Wed Jan 11 15:58:29 2017 clement xia
// Last update Wed Jan 11 23:45:32 2017 clement xia
//

#ifndef DROIDMEMORY_HH_
# define DROIDMEMORY_HH_

# include <string>
# include <iostream>
//# include "droid.hh"

class	DroidMemory
{
private:
  std::size_t	FingerPrint;
  std::size_t	Exp;

public:
  DroidMemory();
  ~DroidMemory();

  std::size_t	getFingerPrint() const;
  std::size_t	getExp() const;
  void		setFingerPrint(std::size_t);
  void		setExp(std::size_t);
  DroidMemory	&operator<<(DroidMemory const &);
  DroidMemory	&operator>>(DroidMemory &);
  DroidMemory	&operator+=(DroidMemory const &);
  DroidMemory	&operator+=(std::size_t const);
  DroidMemory	operator+(DroidMemory const &);
  DroidMemory	operator+(std::size_t const);
};

std::ostream	&operator<<(std::ostream &os, DroidMemory const &name);

#endif /* !DROIDMEMORY_HH_ */
