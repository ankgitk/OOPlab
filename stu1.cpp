#include "iostream"
using namespace std;
class student
{
	int roll_no;
	char name[20];
	float marks;

	public:
		void read();
		void print();
};
void student::read()
{	
	cout<<"Enter rollno, name and marks\n";
	cin>>roll_no>>name>>marks;
}
void student::print()
{
	cout<<"Student details: \n";
	cout<<"Roll No:"<<roll_no<<"	Name:"<<name<<"		Marks:"<<marks<<endl;
}
int main()
{
	student s;
	s.read();
	s.print();
}