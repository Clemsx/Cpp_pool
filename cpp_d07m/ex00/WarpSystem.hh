//
// WarpSystem.hh for d07m_ex00 in /home/clemsx/CPP/Pool/cpp_d07m/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 10:32:21 2017 clement xia
// Last update Tue Jan 10 12:38:40 2017 clement xia
//

#ifndef WARPSYSTEM_HH_
# define WARPSYSTEM_HH_

# include <string>
# include <iostream>

namespace	WarpSystem
{
  class		QuantumReactor
  {
  private:
    bool _stability;

  public:
    QuantumReactor();
    ~QuantumReactor();

    bool isStable();
    void setStability(bool);    
  };

  class		Core
  {
  private:
    WarpSystem::QuantumReactor *_coreReactor;

  public:
    Core(WarpSystem::QuantumReactor *core);
    ~Core();

    WarpSystem::QuantumReactor *checkReactor();
  };
};

#endif /* !WARPSYSTEM_HH_ */
