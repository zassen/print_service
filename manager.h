///////////////////////////////////////////////////////////
//  manager.h
//  Implementation of the Class manager
//  Created on:      17-10ÔÂ-2016 22:06:52
//  Original author: heaven
///////////////////////////////////////////////////////////

#if !defined(EA_E3F075FF_B0AE_4e7a_B4E5_342258DA55B8__INCLUDED_)
#define EA_E3F075FF_B0AE_4e7a_B4E5_342258DA55B8__INCLUDED_

#include "thread.h"

class manager : public thread
{

public:
	manager();
	virtual ~manager();

	int ipc_get();
	int set_ipc();

private:
	list<command> command_queue;
	list<servant> servant_list;

};
#endif // !defined(EA_E3F075FF_B0AE_4e7a_B4E5_342258DA55B8__INCLUDED_)
