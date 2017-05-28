#pragma once
#ifndef STATE_H
#define STATE_H
#include "player.h"

class State  //存储游戏当前状态，存放需要在不同流程间共享的数据
{
public:
	int player_num; //玩家数量
	int day; //当前天数
	Player* player; //存储玩家信息的动态数组，下标为编号
	ServerCommunicate communicate;  //

	int sergeant; //警长的编号，-1代表没有警长

	int person_killed;   //被刀的人的编号，-1代表无人被刀
	int person_guarded;  //被守的人的编号，-1代表守卫没有守人
	bool saved;  //被刀的人是否得到解药

	bool seer_exist; //是否存在预言家（用于流程判定等）

	bool savior_exist; //是否存在守卫
	int last_guarded;  //守卫前一天守的人的编号，-1代表前一天没有守人

	bool witch_exist;  //是否存在女巫
	bool potion_used;  //1代表解药已使用，0代表未使用
	bool poison_used;  //1代表毒药已使用，0代表未使用
};

#endif