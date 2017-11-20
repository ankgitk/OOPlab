#include "iostream"
#include "string"
using namespace std;
class student
{
	int roll_no;
	char name[20];
	float marks;

	public:
		void read(int roll_no,char name[],float marks);
		void print();
};
void student::read(int r,char n[],float m)
{
	roll_no=r;
	strcpy(name,n);
	marks=m;
}
void student::print()
{
	cout<<"Student details: \n";
	cout<<"Roll No:"<<roll_no<<"	Name:"<<name<<"		Marks:"<<marks<<endl;
}
int main()
{
	student s;
	int r;
	char n[20];
	float m;
	cout<<"Enter rollno, name and marks\n";
	cin>>r>>n>>m;
	s.read(r,n,m);
	s.print();
}