// Virtual function example

#include <iostream>
using namespace std;

class Base {
public:
	// virtual function
	virtual void display() {
		cout << "Display of Base" << endl;
	}
};

class Derived: public Base {
public:
	void display() {
		cout << "Display of Derived" << endl;
	}
};

int main()
{
	Base *ptr = new Derived();
	ptr->display();
}