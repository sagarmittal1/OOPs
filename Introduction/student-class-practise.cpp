#include <iostream>
using namespace std;

class Student {
	private:
		int rollNo;
		string name;
		int mathMarks;
		int phyMarks;
		int chemMarks;
	
	public:
		Student(int r, string n, int m, int p, int c){
			rollNo = r;
			name = n;
			mathMarks = m;
			phyMarks = p;
			chemMarks = c;
		}
		
		
		int totalMarks(){
			return mathMarks + phyMarks + chemMarks;
		}
		
		char grade(){
			float average = totalMarks()/3;
			if(average >= 60){
				return 'A';
			}else if(average>=40 && average < 60){
				return 'B';
			}else{
				return 'C';
			}
		}
};

int main()
{
	int roll;
	string name;
	int m,p,c;
	cout << "Enter the roll No: ";
	cin >> roll;
	cout << "Enter Name of the student: ";
	cin >> name;
	cout << "Enter marks in three subjects: ";
	cin >> m >> p >> c;
	Student s(roll, name, m, p, c);
	cout << "Total Marks: " << s.totalMarks() << endl;
	cout << "Grade of the Student: " << s.grade() << endl;
}