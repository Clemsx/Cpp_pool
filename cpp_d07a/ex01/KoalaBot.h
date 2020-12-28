/*
** KoalaBot.h for d07a_ex01 in /home/clemsx/CPP/Pool/cpp_d07a/ex01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Jan 10 18:19:29 2017 clement xia
** Last update Wed Jan 11 09:01:26 2017 clement xia
*/


#ifndef KOALABOT_H_
# define KOALABOT_H_

# include <string>
# include "Parts.h"

class KoalaBot {
 private:
  std::string	serial;
  Arms		arms;
  Legs		legs;
  Head		head;
	
 public:
  KoalaBot(std::string serial = "Bob-01");
  ~KoalaBot();

  void setParts(Arms& arms);
  void setParts(Legs& legs);
  void setParts(Head& head);
  void swapParts(Arms& arms);
  void swapParts(Legs& legs);
  void swapParts(Head& head);
  void informations();
  bool status();
};

#endif
