#include "process.h"

//����stateѡ����Ҫͨ�ŵ�player��ͨ������
//���� communicate.func�������;�����(������player�б�)�õ�������Ϣ
//�Է�����Ϣ���������б�Ҫ�ں���������ʹ�ã�����state��

Process * Process::operator()()
{
	process();  //����ִ��
	if (IsGameEnd())   //��Ϸ�Ƿ�������ж�
		return nullptr;
	else
		return(nextprocess());
}

GameBegin::GameBegin()
{
	//�ȴ��������
	SOCKET servfd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	sockaddr_in servaddr;
	memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family = PF_INET;
	servaddr.sin_addr.s_addr = inet_addr(INADDR_ANY);
	servaddr.sin_port = htons(1234);
	bind(servfd, (SOCKADDR*)&servaddr, sizeof(SOCKADDR));
	listen(servfd, state.player_num);

	//wait for players
	SOCKADDR clntAddr;
	int nSize = sizeof(SOCKADDR);
	SOCKET clntSock = accept(servfd, (SOCKADDR*)&clntAddr, &nSize);
}