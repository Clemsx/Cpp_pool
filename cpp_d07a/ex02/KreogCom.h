/*
** KreogCom.h for d07a_ex02 in /home/clemsx/CPP/Pool/cpp_d07a/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 10 21:00:55 2017 clement xia
** Last update Tue Jan 10 21:23:52 2017 clement xia
*/

#ifndef KREOGCOM_H_
# define KREOGCOM_H_

# include <string>
# include <iostream>

class	KreogCom {

 private:
  int		_serial;
  int		_x;
  int		_y;
  KreogCom	*next;

 public:
  KreogCom(int x, int y, int serial);
  ~KreogCom();

  void addCom(int x, int y, int serial);
  KreogCom *getCom();
  void removeCom();
  void ping();
  void locateSquad();
};

#endif
