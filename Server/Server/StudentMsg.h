#ifndef  __studentmsg__
#define  __studentmsg__

#include "protomsg.h"
#include "gamesocket.h"


class StudentMsg :public protomsg
{
public:
	void OnProcess(char* pb, int length);
	ushort getuid();
};

#endif