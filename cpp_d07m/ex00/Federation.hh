//
// Federation.hh for d07m_ex00 in /home/clemsx/CPP/Pool/cpp_d07m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 10:31:45 2017 clement xia
// Last update Tue Jan 10 12:51:28 2017 clement xia
//

#ifndef FEDERATION_HH_
# define FEDERATION_HH_

# include <iostream>
# include <string>
# include "WarpSystem.hh"

namespace	Federation
{
  namespace	Starfleet
  {
    class	Ship
    {
    private:
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*_core;
      
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();

      void	setupCore(WarpSystem::Core *core);
      void	checkCore();
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

    public:
      Ship(int length, int width, std::string name);
      ~Ship();

      void      setupCore(WarpSystem::Core *core);
      void      checkCore();
    };
};

#endif /* !FEDERATION_HH_ */
