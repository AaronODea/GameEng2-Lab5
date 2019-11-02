
#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;


	cout << p.someMethod() << endl;
	assert(p.someMethod() == true);
	//assert(p.someMethod(a) == 1);


	cin.get();
}