/*
** Toy.h for d13_ex0à in /home/clemsx/CPP/Pool/cpp_d13/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan 16 11:26:48 2017 clement xia
** Last update Tue Jan 17 08:56:57 2017 clement xia
*/

#ifndef TOY_H_
# define TOY_H_

# include <string>
# include <iostream>
# include "Picture.h"

class	Toy
{
 public:
  typedef enum	t_ToyType
  {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY
  }		ToyType;

 protected:
  std::string	name;
  ToyType	type;
  Picture	picture;

 public:
  Toy();
  Toy(const Toy& t);
  Toy(const ToyType type, const std::string name ,const std::string filename);
  ~Toy();

  std::string		getName() const;
  std::string		getAscii() const;
  ToyType		getType() const;  
  void			setName(std::string name);
  bool			setAscii(std::string filename);
  Toy&			operator=(const Toy&);
  virtual void		speak(const std::string);
};

#endif	/* !TOY_H_ */
