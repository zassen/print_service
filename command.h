///////////////////////////////////////////////////////////
//  command.h
//  Implementation of the Class command
//  Created on:      17-10ÔÂ-2016 22:06:52
//  Original author: heaven
///////////////////////////////////////////////////////////

#if !defined(EA_25075269_3D3D_48a0_BF97_739AD06FADF5__INCLUDED_)
#define EA_25075269_3D3D_48a0_BF97_739AD06FADF5__INCLUDED_

class command
{

public:
	command();
	virtual ~command();

private:
	unsigned char *header;
	unsigned char *id;
	unsigned char data[8];
	int len;

};
#endif // !defined(EA_25075269_3D3D_48a0_BF97_739AD06FADF5__INCLUDED_)
