//
// KoalaBot.cpp for d07a_ex01 in /home/clemsx/CPP/Pool/cpp_d07a/ex01
// 
// Made by clement xia
// Login   <clemsx@epitech.net>
// 
// Started on  Tue Jan 10 18:19:36 2017 clement xia
// Last update Wed Jan 11 09:00:58 2017 clement xia
//

#include <string>
#include <iostream>
#include "KoalaBot.h"
#include "Parts.h"

KoalaBot::KoalaBot(std::string serial) {
	this->serial = serial;
}

KoalaBot::~KoalaBot() {
}

void	KoalaBot::setParts(Arms& arms) {
	this->arms = arms;
}

void	KoalaBot::setParts(Legs& legs) {
	this->legs = legs;
}

void	KoalaBot::setParts(Head& head) {
	this->head = head;
}

void	KoalaBot::swapParts(Arms& arms) {
	setParts(arms);
}

void	KoalaBot::swapParts(Legs& legs) {
	setParts(legs);
}

void	KoalaBot::swapParts(Head& head) {
	setParts(head);
}

void	KoalaBot::informations(){
	std::cout << "[KoalaBot] " << serial << std::endl;
	arms.informations();
	legs.informations();
	head.informations();
}

bool KoalaBot::status(){
	return arms.isFunctionnal() && legs.isFunctionnal() && head.isFunctionnal();
}
