#include <iostream>
using namespace std;

// Parent Class of Derived
class Base {  
public:
	void display() {
		cout << "Display of Base" << endl;
	}		
};

// Child class exhibiting the same feactures as of parent class
class Derived:public Base {
public:
	void show() {
		cout << "Derived class is here" << endl;
	}
};

int main()
{
	Derived d;
	d.display();
	d.show();
	
	return 0;
}