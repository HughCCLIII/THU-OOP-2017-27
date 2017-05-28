//在程序开始执行时负责必要的初始化与清理（Windows下主要为dll的加载与清理）
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