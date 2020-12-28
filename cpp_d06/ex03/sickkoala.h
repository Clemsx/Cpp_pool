/*
** sickkoala.h for d06_ex02 in /home/clemsx/CPP/Pool/cpp_d06/ex02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Jan  9 14:30:45 2017 clement xia
** Last update Mon Jan  9 20:47:43 2017 clement xia
*/

#ifndef SICKKOALA_H_
# define SICKKOALA_H_

class SickKoala
{
 private:
  std::string _name_;
  
 public:
  SickKoala(std::string);
  ~SickKoala();

  void poke();
  bool takeDrug(std::string drug);
  void overDrive(std::string fever);
  std::string	getName();
};

#endif /* !SICKKKOALA_H_ */
