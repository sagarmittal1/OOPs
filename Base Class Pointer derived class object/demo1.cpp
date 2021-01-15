// Dermo 1

#include <iostream>
using namespace std;

class Base {
public:
	void fun1() {
		cout << "fun1 of Base Class" << endl;
	}
};

class Derived:public Base {
public:
	void fun2() {
		cout << "fun2 of Derived Class" << endl;
	}
};

int main()
{
	Derived d;
	Base *ptr = &d;  // base class pointer sirf base ke function ko hi karega
	ptr->fun1();  // only fun1 will be called
	
}