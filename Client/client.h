#include <iostream>
#include <stdio.h>
#include <winsock.h>
#include <Windows.h>

class Client 
{
public:
	SOCKET SetSocket();
	int bind_sock(SOCKET sock);
};

