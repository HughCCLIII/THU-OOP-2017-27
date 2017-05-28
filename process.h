#pragma once
#ifndef PROCESS_H
#define PROCESS_H
#include "server_communicate.h"
#include "state.h"

class Process
{
protected:
	static State state; //当前游戏状态
	ServerCommunicate communicate;
public:
	bool IsGameEnd();   //胜负判定（可能可以采用策略模式，以实现不同胜负判定）
	Process* operator()(); //当前流程执行过程，返回指向下一流程的指针
	virtual Process* nextprocess() = 0;  //生成下一流程指针
	virtual void process() = 0;
	virtual ~Process() {}
};

class GameBegin :public Process  //玩家连接服务器完成后的第一个流程，处理游戏开始时的事项
{
public:
	GameBegin();
	void process() {}
	Process* nextprocess();
};

class Day :public Process
{
	//白天流程基类（如有白天流程通用的事项在此实现）
};

class Night :public Process
{
	//夜晚流程基类（如有夜晚流程通用的事项在此实现）
};

class WerewolfProcess :public Night  //狼人刀人环节
{
	void process();
	Process* nextprocess();
};

class SeerProcess :public Night //预言家环节
{
	void process();
	Process* nextprocess();
};

class WitchProcess :public Night //女巫环节
{
	void process();
	Process* nextprocess();
};

class SaviorProcess :public Night //守卫环节
{
	void process();
	Process* nextprocess();
};

class SheriffProcess :public Day //竞选警长环节
{
	void process();
	Process* nextprocess();
};

class DiscussProcess :public Day //发言环节
{
	void process();
	Process* nextprocess();
};

class VoteProcess :public Day  //票人环节
{
	void process();
	Process* nextprocess();
};

class HunterProcess :public Day  //猎人环节（判定猎人死亡且可开枪时进入此环节）
{
	void process();
	Process* nextprocess();
};

class GameEnd :public Process  //游戏结束环节
{
	void process();
	Process* nextprocess();
};

#endif