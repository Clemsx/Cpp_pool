//
// Borg.hh for d07m_ex01 in /home/clemsx/CPP/Pool/cpp_d07m/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 14:44:27 2017 clement xia
// Last update Tue Jan 10 16:52:38 2017 clement xia
//

#ifndef BORG_HH_
# define BORG_HH_

# include <string>
# include <iostream>
# include "WarpSystem.hh"

namespace	Borg
{
  class		Ship
  {
  private:
    int			_side;
    short		_maxWarp;
    WarpSystem::Core	*_core;
    
  public:
    Ship();
    ~Ship();

    void	setupCore(WarpSystem::Core *core);
    void	checkCore();
  };
};

#endif /* !BORG_HH_ */
