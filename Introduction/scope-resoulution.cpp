#include <iostream>
using namespace std;

// An ideal & perfect class
class Rectangle {
	private:
		int length;
		int breadth;
	public:
		Rectangle();
		Rectangle(int l, int b);
		Rectangle(Rectangle &r);
		int getLength(){return length;}
		int getBreadth(){return breadth;}
		void setLength(int l);
		void setBreadth(int b);
		int area();
		int perimeter();
		bool isSquare();
		~Rectangle();
};


// now we use scope resolution to :: to define functions outside class
Rectangle::Rectangle(){
	length = 1;
	breadth = 1;
}

Rectangle::Rectangle(int l, int b){
	length = l;
	breadth = b;
}

Rectangle::Rectangle(Rectangle &r){
	length = r.length;
	breadth = r.breadth;
}

void Rectangle::setLength(int l){
	length = l;
}

void Rectangle::setBreadth(int b){
	breadth = b;
}

int Rectangle::perimeter() {
	return 2*(length + breadth);
}

int Rectangle::area() {
	return length*breadth;
}

bool Rectangle::isSquare(){
	return length== breadth;
}

Rectangle::~Rectangle() {
	cout << "Rectangle Destroyed";
}

int main()
{
	Rectangle r(10,10);
	cout << r.area() << endl;
	cout << r.perimeter() << endl;
	if(r.isSquare()){
		cout << "Yes It is a square " << endl;
	}
}