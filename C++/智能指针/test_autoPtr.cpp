#include <iostream>
#include <string>
#include<memory>

using namespace std;

class Test
{	
private:
	string str;
		
public:
	Test(string s) {
		str = s;
		cout << "test create\n";
	}
	
	~Test() {
		cout << "test delete :" << str << endl;
	}
	
	string& getStr() {
		return str;
	}
	
	void setStr(string s) {
		str = s;
	}
	
	void print() {
		cout << str << endl;
	}
};

int main()
{
	auto_ptr<Test> ptest(new Test("123"));
	
	ptest->setStr("hello ");
	ptest->print();
	
	ptest.get()->print();
	ptest->getStr() += "world !";
	(*ptest).print();
	
	ptest.reset(new Test("123"));
	ptest->print();
	
	return 0;
}









