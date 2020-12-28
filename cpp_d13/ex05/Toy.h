/*
** Toy.h for d13_ex0à in /home/clemsx/CPP/Pool/cpp_d13/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan 16 11:26:48 2017 clement xia
** Last update Mon Jan 16 19:25:48 2017 clement xia
*/

#ifndef TOY_H_
# define TOY_H_

#include <iostream>
#include <string>
#include "Picture.h"

class	       		Toy
{
 public:
  typedef enum
  {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY
  }	ToyType;
  
  class			Error
  {
  public:
    typedef enum
    {
      UNKNOWN,
      PICTURE,
      SPEAK
    }	ErrorType;

    ErrorType  		type;

    Error();
    ~Error();
    void			setType(ErrorType);
    std::string			what() const;
    std::string			where() const;
  };

 protected:
  std::string			name;
  Picture			picture;
  ToyType			type;
  Error				error;

 public:
  Toy();
  Toy(const Toy&);
  Toy(const ToyType type, const std::string name, const std::string filename);
  ~Toy();

  Toy&				operator=(const Toy&);
  Toy&				operator<<(const std::string&);

  ToyType			getType() const;
  std::string			getName() const;
  std::string			getAscii() const;

  void				setName(std::string name);
  bool				setAscii(std::string filename);

  virtual void			speak(const std::string);
  virtual bool			speak_es(const std::string);

  Toy::Error const&		getLastError() const;
};

std::ostream&			operator<<(std::ostream&, const Toy&);

#endif /* !TOY_H_ */
