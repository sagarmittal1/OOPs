#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Default of Base" << endl;
	}
	Base(int x) {
		cout << "Param of Base " << x << endl;
	}
};

class Derived:public Base {
public:
	Derived() {
		cout << "Default of Derived" << endl;
	}
	Derived(int a) {
		cout << "Param of Derived " << a << endl;
	}
    // This is for when we want to call parent class param constructor
	Derived(int x,int a):Base(x) {
		cout << "Param of Derived " << a << endl; 
	}
};

int main()
{
	Derived d(10, 20);  
	// Output for default 
	// Default of Base
	// Default of Derived
}