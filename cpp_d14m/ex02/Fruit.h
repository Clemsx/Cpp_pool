/*
** Fruit.h for d14m_ex00 in /home/clemsx/CPP/Pool/cpp_d14m/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 17 10:49:30 2017 clement xia
** Last update Tue Jan 17 19:29:01 2017 clement xia
*/

#ifndef FRUIT_H_
# define FRUIT_H_

# include <string>
# include <iostream>

class	Fruit
{
 protected:
  int		_vitamins;
  std::string	_name;
  
 public:
  Fruit();
  Fruit(std::string const, int);
  virtual ~Fruit();

  virtual int		getVitamins() const;
  virtual std::string const&	getName() const;
};

#endif	/* !FRUIT_H_ */
