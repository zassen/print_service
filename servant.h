///////////////////////////////////////////////////////////
//  servant.h
//  Implementation of the Class servant
//  Created on:      17-10ÔÂ-2016 22:06:52
//  Original author: heaven
///////////////////////////////////////////////////////////

#if !defined(EA_1472FAAC_892C_4e0a_8514_AAA9AF99BA42__INCLUDED_)
#define EA_1472FAAC_892C_4e0a_8514_AAA9AF99BA42__INCLUDED_

#include "thread.h"
#include "tty.java"

class servant : public thread
{

public:
	servant();
	virtual ~servant();
	string name;
	unsigned char servent_id;
	tty *m_tty;

	virtual int read();
	int run();
	virtual int write();

private:
	*command command;
	tty port;
	int state;

};
#endif // !defined(EA_1472FAAC_892C_4e0a_8514_AAA9AF99BA42__INCLUDED_)
