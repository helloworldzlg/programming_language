#include <iostream>

using namespace std;

template <typename T1, typename T2>
class point {
private:
	T1 x;
	T2 y;
	
public:
	point(T1 _x, T2 _y) {
		x = _x;
		y = _y;
	}
	
	void setX(T1 _x) {
		x = _x;
	}
	
	T1 getX() {
		return x;
	}
	
	void setY(T2 _y) {
		y = _y;
	}
	
	T2 getY() {
		return y;
	}
};

int main()
{
	point<int, int> *p1 = new point<int, int>(10, 20);
	cout << p1->getX() << endl;
	cout << p1->getY() << endl;
	
	p1->setX(100);
	p1->setY(200);
	
	cout << p1->getX() << endl;
	cout << p1->getY() << endl;
	
	point<float, float> *p2 = new point<float, float>(10.5, 20.5);
	cout << p2->getX() << endl;
	cout << p2->getY() << endl;
	
	p2->setX(100.5);
	p2->setY(200.5);
	
	cout << p2->getX() << endl;
	cout << p2->getY() << endl;	
			
	return 0;
} 
