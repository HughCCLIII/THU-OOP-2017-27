#pragma once
#ifndef SERV_COMMUN_H
#define SERV_COMMUN_H

class ServerCommunicate
{
protected:

public:
	void vote(int *voter, int voter_num, int *option, int option_num, int *result); //ͶƱ
	//������������Ϊ����Ҫ����ͶƱ����ұ�ţ���Ҫ����ͶƱ�����������ͶƱ����ѡ�����ҷ�Χ������ѡ������������ͶƱ����洢λ�ã�ͶƱ���Ϊ-1������Ȩ��δͶƱ��
	//�������˵���ʱ����Ϊ�����˱�ţ��������������ŵ��˱�ţ����ŵ������������ڴ洢ͶƱ��������飨��voter����˳��洢��
	void prompt(int *player, int player_num, char* str, int length); //�����ʾ��Ϣ
	//������������Ϊ����Ҫ���������ұ�ţ���Ҫ����������Ŀ����Ҫ�������Ϣ����Ҫ�������Ϣ����
};

#endif