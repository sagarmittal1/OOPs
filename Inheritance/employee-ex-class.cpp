// Program for class for Employee of which we are deriving
// class for fulltime & partime employee using inheritance

#include <iostream>
using namespace std;

class Employee {
private:
	int eid;
	string name;
public:
	Employee(int id, string name) {
		eid = id;
		this->name = name;
	}	
	int getID() {return eid;}
	string getName() {return name;}
};

class FullTimeEmployee:public Employee {
private:
	int salary;
public:
	FullTimeEmployee(int id, string name, int s):Employee(id, name) {
		salary = s;
	}
	int getSalary() {return salary;}
};

class PartTimeEmployee:public Employee {
private:
	int wages;
public:
	PartTimeEmployee(int id, string name, int w):Employee(id, name) {
		wages = w;
	}
	int getWages() {return wages;}
};

int main()
{
	FullTimeEmployee f(1, "Raj", 5000);
	PartTimeEmployee p(2, "John", 300);
	
	cout << "Salary of " << f.getName() << " is " << f.getSalary() << endl;
	cout << "Salary of " << p.getName() << " is " << p.getWages() << endl;
	
	return 0;
}

/*
 * Salary of Raj is 5000
 * Salary of John is 300
*/