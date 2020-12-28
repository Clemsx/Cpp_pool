//
// Federation.hh for d07m_ex00 in /home/clemsx/CPP/Pool/cpp_d07m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 10:31:45 2017 clement xia
// Last update Tue Jan 10 17:20:33 2017 clement xia
//

#ifndef FEDERATION_HH_
# define FEDERATION_HH_

# include <iostream>
# include <string>
# include "WarpSystem.hh"
# include "Borg.hh"
# include "Destination.hh"

namespace	Federation
{
  namespace	Starfleet
  {

    class       Captain
    {
    private:
      std::string       _name;
      int               _age;

    public:
      Captain(std::string name);
      ~Captain();

      std::string getName();
      int         getAge();
      void        setAge(int age);
    };

    class	Ship
    {
    private:
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*_core;
      Captain		*_cap;
      Destination	_location;
      Destination	_home;
      
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();

      void	setupCore(WarpSystem::Core *core);
      void	checkCore();
      void	promote(Captain *cap);
      bool	move(int warp, Destination d);
      bool	move(int warp);
      bool	move(Destination d);
      bool	move();
    };

    class	Ensign
    {
    private:
      std::string	_name;

    public:
      explicit Ensign(std::string name);
      ~Ensign();
    };
  };

    class       Ship
    {
    private:
      int               _length;
      int               _width;
      std::string       _name;
      short             _maxWarp;
      WarpSystem::Core  *_core;
      Destination	_location;
      Destination	_home;

    public:
      Ship(int length, int width, std::string name);
      ~Ship();

      void      setupCore(WarpSystem::Core *core);
      void      checkCore();
      bool	move(int warp, Destination d);
      bool	move(int warp);
      bool	move(Destination d);
      bool	move();
    };
};

#endif /* !FEDERATION_HH_ */
