#include <iostream>
#include <string>

using namespace std;

class Person
{
public:	
	Person();
	~Person();
	void eat();
	string m_strName;
	int m_iAge;
};

Person::Person()
{
	cout << "Person create" << endl;
}

Person::~Person()
{
	cout << "Person clean" << endl;
}

void Person::eat()
{
	cout << "Person eat" << endl;
}

class Worker: public Person
{
public:
	Worker();
	~Worker();
	void work();
	int m_iSalary;
};

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

int main()
{
	Worker *jim = new Worker();
	
	jim->m_strName = "jim";
	jim->m_iAge    = 20;
	jim->eat();
	
	jim->m_iSalary = 1000;
	jim->work();
	
	delete jim;
	
	cout << "main finished!" << endl;
	
	return 0;
} 



