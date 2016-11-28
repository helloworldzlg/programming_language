#include <iostream>

using namespace std;

static int Data[5] = {10, 20, 30, 40, 50};

int& changVal(int i)
{
	return Data[i];
}

int main()
{
	int i;
	
	for (i = 0; i < 5; i++)
	{
		cout << Data[i] << endl;
	}
	
	cout << "<------>" << endl;
	
	changVal(1) = 50;
	changVal(3) = 70;
	
	for (i = 0; i < 5; i++)
	{
		cout << Data[i] << endl;
	}
	
	return 0;	
}
