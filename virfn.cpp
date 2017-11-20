#include "iostream"
using namespace std;
class stu
{
	char name[20];
	float sgpa;
	int out;
	public:
		virtual void getname()
		{
			cout<<"Enter Student's name: ";
			cin>>name;
		}
		virtual void getdata()
		{
			cout<<"Enter SGPA: ";
			cin>>sgpa;
		}
		virtual void isoutstanding()
		{
			if(sgpa>8.5)
				out=1;
			else
				out=0;
		}
		virtual int retout()
		{	
			return out;
		}
		virtual void show()
		{
			cout<<"Name:"<<name<<"\tSGPA:"<<sgpa<<endl;
		}
};
class prof: public stu
{
	char name[25];
	int noop;
	int out;
	public:
		void getname()
		{
			cout<<"Enter Professor's name: ";
			cin>>name;
		}
		void getdata()
		{
			cout<<"Enter no of Publications: ";
			cin>>noop;
		}
		void isoutstanding()
		{
			if(noop>100)
				out=1;
			else
				out=0;
		}
		int retout()
		{	return out;}
		void show()
		{
			cout<<"Name:"<<name<<"\tPublications:"<<noop<<endl;
		}
};
int main()
{
	stu s[10];
	prof p[10];
	stu *sptr;
	char c;
	int en,i;
	cout<<"Professor or Student: ";
	cin>>c;
	if(c=='S' or c=='s')
	{
		cout<<"Enter number of entries: ";
		cin>>en;
		for(i=0;i<en;i++)
		{
			sptr=&s[i];
			sptr->getname();
			sptr->getdata();
			sptr->isoutstanding();
		}
		for(i=0;i<en;i++)
		{
			sptr=&s[i];
			if(sptr->retout()==1)
				sptr->show();
		}
	}
	else if (c=='P' or c=='p')
	{
		cout<<"Enter number of entries: ";
		cin>>en;
		for(i=0;i<en;i++)
		{
			sptr=&p[i];
			sptr->getname();
			sptr->getdata();
			sptr->isoutstanding();
		}
		for(i=0;i<en;i++)
		{
			sptr=&s[i];
			if(sptr->retout()==1)
				sptr->show();
		}
	}
	return 0;
}