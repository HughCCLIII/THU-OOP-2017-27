#pragma once
#ifndef PROCESS_H
#define PROCESS_H
#include "server_communicate.h"
#include "state.h"

class Process
{
protected:
	static State state; //��ǰ��Ϸ״̬
	ServerCommunicate communicate;
public:
	bool IsGameEnd();   //ʤ���ж������ܿ��Բ��ò���ģʽ����ʵ�ֲ�ͬʤ���ж���
	Process* operator()(); //��ǰ����ִ�й��̣�����ָ����һ���̵�ָ��
	virtual Process* nextprocess() = 0;  //������һ����ָ��
	virtual void process() = 0;
	virtual ~Process() {}
};

class GameBegin :public Process  //������ӷ�������ɺ�ĵ�һ�����̣�������Ϸ��ʼʱ������
{
public:
	GameBegin();
	void process() {}
	Process* nextprocess();
};

class Day :public Process
{
	//�������̻��ࣨ���а�������ͨ�õ������ڴ�ʵ�֣�
};

class Night :public Process
{
	//ҹ�����̻��ࣨ����ҹ������ͨ�õ������ڴ�ʵ�֣�
};

class WerewolfProcess :public Night  //���˵��˻���
{
	void process();
	Process* nextprocess();
};

class SeerProcess :public Night //Ԥ�Լһ���
{
	void process();
	Process* nextprocess();
};

class WitchProcess :public Night //Ů�׻���
{
	void process();
	Process* nextprocess();
};

class SaviorProcess :public Night //��������
{
	void process();
	Process* nextprocess();
};

class SheriffProcess :public Day //��ѡ��������
{
	void process();
	Process* nextprocess();
};

class DiscussProcess :public Day //���Ի���
{
	void process();
	Process* nextprocess();
};

class VoteProcess :public Day  //Ʊ�˻���
{
	void process();
	Process* nextprocess();
};

class HunterProcess :public Day  //���˻��ڣ��ж����������ҿɿ�ǹʱ����˻��ڣ�
{
	void process();
	Process* nextprocess();
};

class GameEnd :public Process  //��Ϸ��������
{
	void process();
	Process* nextprocess();
};

#endif