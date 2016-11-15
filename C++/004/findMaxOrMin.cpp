#include <iostream>

using namespace std;

int getMaxOrMin(int* arr, int size, bool isMax)
{
	if (size <= 0)
	{
		return 0xFFFFFFFF;
	}
	
	int max = arr[0];
	int min = arr[0];
	
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	if (isMax)
		return max;
	else
		return min;	
}

int main()
{
	int array[10] = {78, 12, 23, 34, 45, 78, 34, 56, 89, 77};
	
	cout << getMaxOrMin(array, 10, 1) << endl;
	cout << getMaxOrMin(array, 10, 0) << endl;
	
	return 0;
}
