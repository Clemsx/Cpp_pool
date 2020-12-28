//
// Borg.hh for d07m_ex01 in /home/clemsx/CPP/Pool/cpp_d07m/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 14:44:27 2017 clement xia
// Last update Tue Jan 10 17:15:42 2017 clement xia
//

#ifndef BORG_HH_
# define BORG_HH_

# include "Destination.hh"
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
    Destination		_location;
    Destination		_home;
    
  public:
    Ship();
    ~Ship();

    void	setupCore(WarpSystem::Core *core);
    void	checkCore();
    bool	move(int warp, Destination d);
    bool	move(int warp);
    bool	move(Destination d);
    bool	move();
  };
};

#endif /* !BORG_HH_ */
