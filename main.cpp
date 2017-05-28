#include <iostream>
#include <thread>
#include "initial.h"
#include "process.h"
#pragma comment (lib,"ws2_32.lib")
using namespace std;

void server()  //服务器线程
{
	//进行游戏的基础设定
	
	//游戏过程
	Process* NowProcess = new GameBegin;
	Process* NextProcess;
	while (NowProcess != nullptr)
	{
		NextProcess = (*NowProcess)();
		delete NowProcess;
		NowProcess = NextProcess;
	}
	
	//线程结束的处理
}

int main()  //客户端程序
{
	initial init;
	
    return 0;
}

