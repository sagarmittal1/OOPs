#include <iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
	
	public:
		int area(){
			return length*breadth;
		}
		int perimeter(){
			return 2*(length + breadth);
		}
		void setLength(int l){  // mutator
			if(l >= 0){
				length = l;
			}else{
				length = 0;
			}
		}
		void setBreadth(int b){
			if(b >= 0){
				breadth = b;
			}else{
				breadth = 0;
			}
		}
		int getLength(){  // acccessor
			return length;
		}
		int getBreadth(){
			return breadth;
		}
};

int main()
{
	Rectangle r;
	r.setLength(10);
	r.setBreadth(5);
	cout << r.getLength() << endl;
	cout << r.getBreadth() << endl;
	cout << r.area() << endl;
	cout << r.perimeter() << endl;
}