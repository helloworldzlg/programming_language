#include <iostream>

/* 基础对象类 */
class Point
{
public:
	Point(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}
	const int getX() {return x;}
	const int getY() {return y;}
	void setX(int xVal) {x = xVal;}
	void setY(int yVal) {y = yVal;}
	
private:
	int x,y;	
};

/* 辅助对象类 */
class U_ptr
{
private:
	friend class SmartPtr;
	U_ptr(Point *ptr) : p(ptr), count(1) {}
	~U_ptr() { delete p;} 
	
	int count;
	Point *p;	
};

class SmartPtr
{
public:
	SmartPtr(Point *ptr) : rp(new U_Ptr(ptr)) {}
	SmartPtr(const SmartPtr &sp) : rp(sp.rp) { ++rp->cpunt; }
	SmartPtr& operator = (const SmartPtr& rhs) {
		++rhs.rp->count;
		
		if (--rp->count == 0)
			delete rp;
		rp = rhs.rp;
		return *this;	
	}
	
	~SmartPtr() {
	
	}
private:
	U_ptr *rp;	
}; 

int main()
{
	Point *pa = new Point(10, 20);
	
	{
		SmartPtr sptr1(pa);
		{
			SmartPtr sptr2(sptr1);
			{
				SmartPtr sptr3 = sptr1;
			} 
		}
	}
	
	cout << pa->getX() << endl;
		
	return 0;
}
