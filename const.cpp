#include "iostream"
using namespace std;
class student
{
	public:
	int roll_no;
	char name[20];
	float marks;

		student();
		student(int a, char b[],float c)
		{
			roll_no=a;
			strcpy(name,b);
			marks=c;
		}
		student(student &s)
		{
			roll_no=s.getroll();
			strcpy(name,s.name);
			marks=s.getmarks();
		}
		int getroll()
		{
			return roll_no;
		}
		float getmarks()
		{
			return marks;
		}
		void print()
		{
			cout<<"Roll No:"<<roll_no<<" Name:"<<name<<" Marks:"<<marks<<endl;
		}
};
int main()
{
	student s1;
	student s2(12,"Nabeel",96.0);
	student s3(s2);
	cout<<"Default: ";s1.print();
	cout<<"Parameterized: ";s2.print();
	cout<<"Copy: ";s3.print();
	return 0;
}
