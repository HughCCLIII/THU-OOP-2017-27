#pragma once
#ifndef SERV_COMMUN_H
#define SERV_COMMUN_H

class ServerCommunicate
{
protected:

public:
	void vote(int *voter, int voter_num, int *option, int option_num, int *result); //投票
	//参数意义依次为：需要进行投票的玩家编号，需要进行投票的玩家数量，投票可以选择的玩家范围，可以选择的玩家数量，投票结果存储位置（投票结果为-1代表弃权或未投票）
	//例：狼人刀人时依次为：狼人编号，狼人数量，活着的人编号，活着的人数量，用于存储投票结果的数组（按voter数组顺序存储）
	void prompt(int *player, int player_num, char* str, int length); //输出提示信息
	//参数意义依次为：需要输出到的玩家编号，需要输出的玩家数目，需要输出的信息，需要输出的信息长度
};

#endif