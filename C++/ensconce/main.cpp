#include <iostream>
#include "Worker.h"

using namespace std;

int main()
{
	Worker worker;
	worker.work();
	worker.Person::work();
	
	return 0;
}
