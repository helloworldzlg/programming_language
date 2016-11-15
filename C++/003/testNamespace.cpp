#include <iostream>

using namespace std;

namespace A 
{
	int x = 1;
	
	void fun()
	{
		cout << "A" << endl;
	}
}

namespace B
{
	int x = 2;
	
	void fun()
	{
		cout << "B" << endl;
	}
}

int main()
{
	cout << "hello" << endl;
	
	cout << A::x << endl;
	cout << B::x << endl;
	
	A::fun();
	
	B::fun();
}
