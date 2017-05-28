#pragma once
#ifndef STATE_H
#define STATE_H
#include "player.h"

class State  //�洢��Ϸ��ǰ״̬�������Ҫ�ڲ�ͬ���̼乲�������
{
public:
	int player_num; //�������
	int day; //��ǰ����
	Player* player; //�洢�����Ϣ�Ķ�̬���飬�±�Ϊ���
	ServerCommunicate communicate;  //

	int sergeant; //�����ı�ţ�-1����û�о���

	int person_killed;   //�������˵ı�ţ�-1�������˱���
	int person_guarded;  //���ص��˵ı�ţ�-1��������û������
	bool saved;  //���������Ƿ�õ���ҩ

	bool seer_exist; //�Ƿ����Ԥ�Լң����������ж��ȣ�

	bool savior_exist; //�Ƿ��������
	int last_guarded;  //����ǰһ���ص��˵ı�ţ�-1����ǰһ��û������

	bool witch_exist;  //�Ƿ����Ů��
	bool potion_used;  //1�����ҩ��ʹ�ã�0����δʹ��
	bool poison_used;  //1����ҩ��ʹ�ã�0����δʹ��
};

#endif