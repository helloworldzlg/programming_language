#include <iostream>
#include "Worker.h"

using namespace std;

Worker::Worker()
{
	cout << "Worker create" << endl;
}

Worker::~Worker()
{
	cout << "Worker clean" << endl;
}

void Worker::work()
{
	cout << "Worker work" << endl;
}
