/*
** Picture.h for d13_ex00 in /home/clemsx/CPP/Pool/cpp_d13/ex00
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan 16 11:26:24 2017 clement xia
** Last update Tue Jan 17 08:42:01 2017 clement xia
*/

#ifndef PICTURE_H_
# define PICTURE_H_

# include <string>
# include <iostream>

class	Picture
{
 public:
  std::string	data;  
  Picture();
  Picture(const std::string& file);
  ~Picture();

  bool		getPictureFromFile(const std::string& file);
};

#endif	/* !PICTURE_H_ */
