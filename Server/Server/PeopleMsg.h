#ifndef  __peoplemsg__
#define  __peoplemsg__

#include "protomsg.h"
#include "gamesocket.h"

class PeopleMsg :public protomsg
{
public:
	void OnProcess(char* pb, int length);
	ushort getuid();

};



#endif // ! _peoplemsg__


