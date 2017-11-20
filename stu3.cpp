#include "iostream"
using namespace std;
int l=0;
class student
{
	int roll_no;
	char name[20];
	float marks;

	public:
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
			strcpy(name,s.getname());
			marks=s.getmarks();

		}
		int getroll();
		int getname()
		{
			return name;
		}
		int getmarks()
		{
			return marks;
		}
		void read();
		void print();
};
int student::ret_roll()
{
	int s;
	s=roll_no;
	return s;
}
void student::read()
{	
	cout<<"Enter rollno, name and marks for student ";
	cin>>roll_no>>name>>marks;
}
void student::print()
{
	cout<<"Roll No:"<<roll_no<<"	Name:"<<name<<"		Marks:"<<marks<<endl;
}
int search(student s[])
{
	int i,r,roll;
	cout<<"Enter roll no to search: ";
	cin>>r;
	for(i=0;i<l;i++)
	{	
		roll=s[i].getroll();
		if(r==roll)
		{
			s[i].print();
			break;
		}
	}
	return i;
}
void del(student s[],int pos)
{
	int i;
	for(i=pos;i<l;i++)
		s[i]=s[i+1];
	cout<<"Deleted record\n";
	--l;
}
void disp(student s[])
{
	for(int i=0;i<l;i++)
		s[i].print();
}
int main()
{
	student s[5],x;
	int i,pos,ch;
	bool a=true;
	while(a)
	{
		cout<<"Enter your choice: \n";
		cout<<"1. Add student\n2. Search records\n3. Update record\n4. Delete record\n5. Display All Records\n6. Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1: s[l].read();
					++l;break;
			case 2: search(s);break;
			case 3: pos=search(s);
					s[pos].read();
					break;
			case 4: pos=search(s);
					del(s,pos);
					break;
			case 5: disp(s);break;
			case 6: cout<<"Exiting...";
					a=false;
					break;
			default:cout<<"wrong choice";
		}
	}
	return 0;
}