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
	cin>>roll_no>>name>>marks;
}
void student::print()
{
	cout<<"Roll No:"<<roll_no<<"	Name:"<<name<<"		Marks:"<<marks<<endl;
}
int main()
{
	student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Enter rollno, name and marks for student "<<i+1<<endl;	
		s[i].read();
	}
	for(i=0;i<3;i++)
	{
		cout<<"Student"<<i+1<<"details: \n";
		s[i].print();
	}
}