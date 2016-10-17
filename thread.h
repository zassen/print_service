///////////////////////////////////////////////////////////
//  thread.h
//  Implementation of the Class thread
//  Created on:      17-10ÔÂ-2016 22:06:52
//  Original author: heaven
///////////////////////////////////////////////////////////

#if !defined(EA_820CEB3A_1F1A_4376_B19B_B7E856AD35EC__INCLUDED_)
#define EA_820CEB3A_1F1A_4376_B19B_B7E856AD35EC__INCLUDED_

class thread
{

public:
	thread();
	virtual ~thread();
	int detach();
	int join();
	virtual static void * run(void * arg);
	pthread_t self();
	int start(void * arg);

private:
	int t_detached;
	pthread_t t_id;
	int t_running;

};
#endif // !defined(EA_820CEB3A_1F1A_4376_B19B_B7E856AD35EC__INCLUDED_)
