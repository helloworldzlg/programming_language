#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp;
	
	temp = a;	
	a = b;	
	b = temp;
	
	return;
}

int main()
{
	int v1 = 10;
	int v2 = 20;
	
	cout << v1 << endl;
	cout << v2 << endl;
	
	swap(v1, v2);
	
	cout << v1 << endl;
	cout << v2 << endl;
	
	return 0;		
} 
