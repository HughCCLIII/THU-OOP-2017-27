//�ڳ���ʼִ��ʱ�����Ҫ�ĳ�ʼ��������Windows����ҪΪdll�ļ���������
#pragma once
#ifndef INIT_H
#define INIT_H
#include <WinSock2.h>

class initial
{
private:
	WSADATA wsadata;
public:
	initial();
	~initial();
};

#endif