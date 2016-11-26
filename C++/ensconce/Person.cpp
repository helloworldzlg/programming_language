#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
	cout << "Person create" << endl;
}

Person::~Person()
{
	cout << "Person clean" << endl;
}

void Person::work()
{
	cout << "Person work" << endl;
}
