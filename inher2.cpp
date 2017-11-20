#include "iostream"
using namespace std;
class employee
{
	char name[25];
	int eno;
	public:
		employee()
		{
			strcpy(name,"none");
			eno=0;	
		}
		void getdata()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Employee number: ";
			cin>>eno;
		}
		void putdata()
		{
			cout<<"Name:"<<name<<"\tEmployee number:"<<eno;
		}
		~employee();
};
class manager: public employee
{
	char title[15];
	float dues;
	public:
		manager()
		{
			strcpy(title,"employee");
			dues=0.0;
		}
		void getdata()
		{
			employee::getdata();
			cout<<"Enter title: ";
			cin>>title;
			cout<<"Enyer dues: ";
			cin>>dues;
		}
		void putdata()
		{
			employee::putdata();
			cout<<"\tTitle:"<<title<<"\tDues:"<<dues;
		}
		~manager();
};
class scientist: public employee
{
	int noop;
	public:
		scientist()
		{
			noop=0;
		}
		void getdata()
		{
			employee::getdata();
			cout<<"Enter no of publications: ";
			cin>>noop;
		}
		void putdata()
		{
			employee::putdata();
			cout<<"\tPublications:"<<noop;
		}
		~scientist();
};
class labourer: public employee
{
	public:
		labourer();
		void getdata()
		{
			employee::getdata();
		}
		void putdata()
		{
			employee::putdata();
			cout<<"\n";
		}
		~labourer();
};
int main()
{
	manager m[10];
	char ch;
	int sn=0,ln=0,mn=0,n,i;
	scientist s[10];
	labourer l[10];
	cout<<"how many records?";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"M for manager, S for scientist, L for labourer:";
		cin>>ch;
		switch(ch)
		{
			case 's':
			case 'S': s[sn++].getdata();break;
			case 'm':
			case 'M': m[mn++].getdata();break;
			case 'l':
			case 'L': l[ln++].getdata();break;
			default:cout<<"wrong choice!";
		}
	}
	cout<<"\nMANAGERS\n";
	for(i=0;i<mn;i++)
		m[i].putdata();
	cout<<"\nSCIENTISTS\n";
	for(i=0;i<sn;i++)
		s[i].putdata();
	cout<<"\nLABOURERS\n";
	for(i=0;i<ln;i++)
		l[i].putdata();
	return 0;
}