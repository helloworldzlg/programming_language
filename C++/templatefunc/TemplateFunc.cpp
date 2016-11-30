#include <iostream>

using namespace std;

template <typename T> 
T sum(T a, T b)
{
	T c = a + b;
	
	return c;
}

int main()
{
	int a1 = 10;
	int b1 = 20;
	
	float a2 = 1.5;
	float b2 = 3.5;
	
	double a3 = 5.5;
	double b3 = 6.5;
	
	int c1 = sum(a1, b1);
	cout << c1 << endl;
	
	float c2 = sum(a2, b2);
	cout << c2 << endl;
	
	double c3 = sum(a3, b3);
	cout << c3 << endl;	
			
	return 0;
}
