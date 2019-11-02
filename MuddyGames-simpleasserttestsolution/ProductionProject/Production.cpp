#include "Production.h"

bool Production::someMethod()
{
	bool correct = true;
	int b[6] = { 1,2,3,4,5,6 };

	int size = sizeof(b) / 4;
	if (size != 6) {correct = false;}

	for (int i = 0; i < size; i++)
	{
		if (b[i] < 1 || b[i] > 46) {correct = false;}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j)
			{if (b[i] == b[j]) {correct = false;}}
		}
	}


	return correct;
}
