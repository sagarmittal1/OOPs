// Rational No. class for overloading + & <<

#include <iostream>
using namespace std;

class Rational {
private:
	int num;
	int den;
public:
	Rational(int n=1, int d=1){
		num = n;
		den = d;
	}
	
	void display() {
		cout << num << "/" << den << endl; 
	}	
	
	friend Rational operator+(Rational r1, Rational r2);
	friend ostream & operator<<(ostream &out, Rational &r);
};

Rational operator+ (Rational r1, Rational r2) {
	Rational temp;
	temp.num = (r1.num*r2.den) + (r2.num*r1.den);
	temp.den = r1.den * r2.den;
	return temp;
}

ostream & operator<<(ostream &out, Rational &r) {
	out << r.num << "/" << r.den;
	return out;
}

int main()
{
	Rational r1(3,4), r2(2,5), r3;
	r3 = r1 + r2;
	cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
	
	return 0;
}