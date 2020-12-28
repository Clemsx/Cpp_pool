//
// find.hpp for d17_ex00 in /home/clemsx/CPP/Pool/cpp_d17/ex00
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Fri Jan 20 09:28:47 2017 clement xia
// Last update Fri Jan 20 10:58:25 2017 clement xia
//

#ifndef FIND_HPP_
# define FIND_HPP_

# include <algorithm>
# include <string>
# include <iostream>

template <typename I>
typename I::iterator	do_find(I& cont, int occ)
{
  return (std::find(cont.begin(), cont.end(), occ));
}

#endif	/* !FIND_HPP_ */
