#include "initial.h"

initial::initial()
{
	WSAStartup(MAKEWORD(2, 2), &wsadata);
}

initial::~initial()
{
	WSACleanup();
}
