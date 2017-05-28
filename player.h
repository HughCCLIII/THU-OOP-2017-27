#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <WinSock2.h>

enum Role { werewolf, seer, witch, guardian, hunter, villager };

class Player
{
public:
	char* name[20];   //名称
	Role role;        //身份
	bool alive;       //死活
};

#endif