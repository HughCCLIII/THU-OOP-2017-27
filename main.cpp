#include <iostream>
#include <thread>
#include "initial.h"
#include "process.h"
#pragma comment (lib,"ws2_32.lib")
using namespace std;

void server()  //�������߳�
{
	//������Ϸ�Ļ����趨
	
	//��Ϸ����
	Process* NowProcess = new GameBegin;
	Process* NextProcess;
	while (NowProcess != nullptr)
	{
		NextProcess = (*NowProcess)();
		delete NowProcess;
		NowProcess = NextProcess;
	}
	
	//�߳̽����Ĵ���
}

int main()  //�ͻ��˳���
{
	initial init;
	
    return 0;
}

