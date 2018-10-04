#include <fstream>

#include "OmfDocument.h"

using namespace std;

OmfDocument::OmfDocument()
{
}

void OmfDocument::open(const std::string &fileName)
{
	ifstream file;
	file.exceptions(ifstream::failbit);
	try {
		file.open(fileName, ios::binary);
	} catch (...) {
		throw runtime_error(string("Unable to open ") + fileName);
	}
}
