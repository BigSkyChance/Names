#include "ReadNames.h"
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

void ReadNames(char Names[][MaxCharsPerName + 1], int NumNames)
{
	int		i;


	for (i = 0; i < NumNames; i++)
	{
		cin.getline(Names[i], MaxCharsPerName);
	}

}
