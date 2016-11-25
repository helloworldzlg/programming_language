#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "请输入一个整数" << endl;	
    cin >> x;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;

    bool y = false;

    cout << "请输入一个布尔值" << endl;
    cin >> y;
    cout << boolalpha << y << endl;

    return 0;
} 
