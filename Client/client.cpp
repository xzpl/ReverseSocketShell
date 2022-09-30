#include "client.h"

#define SERVER 127.0.0.1
#define PORT 4034
#define BUFFER 1024


SOCKET Client::SetSocket()
{
	SOCKET s_socket = socket(AF_INET, SOCK_STREAM, 0);

	if (s_socket <= 0)
	{
		ExitProcess(1);
	}

	return s_socket;
}

int	Client::bind_sock(SOCKET sock)
{
	SOCKADDR_IN sInfo;

	sInfo.sin_family = AF_INET;
	sInfo.sin_addr.S_un.S_addr = INADDR_ANY;
	sInfo.sin_port = htons(PORT);

	if (bind(sock, (const sockaddr *)&sInfo, sizeof(sInfo) <= 0))
	{
		std::cout << "Error, Could Not Bind " << sock;
		ExitProcess(1);
	}

	return 0;
}