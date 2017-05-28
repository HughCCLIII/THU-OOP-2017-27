#include "process.h"

//根据state选出需要通信的player和通信类型
//调用 communicate.func（由类型决定）(参数（player列表）)得到返回信息
//对返回信息做处理（如有必要在后续流程中使用，存入state）

Process * Process::operator()()
{
	process();  //具体执行
	if (IsGameEnd())   //游戏是否结束的判定
		return nullptr;
	else
		return(nextprocess());
}

GameBegin::GameBegin()
{
	//等待玩家连接
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