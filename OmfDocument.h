#ifndef OMFDOCUMENT_H
#define OMFDOCUMENT_H

#include <string>

class OmfDocument
{
public:
	OmfDocument();

	void open(const std::string &fileName);
};

#endif // OMFDOCUMENT_H
