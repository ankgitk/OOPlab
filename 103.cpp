#include "iostream"
#include "cmath"
using namespace std;
class shape
{
	double l,b,a;
	public:
		void get_data(double c, double d=0)
		{
			l=c;
			b=d;
		}
		double ret_l()
		{
			return l;
		}
		double ret_b()
		{
			return b;
		}
		virtual void display_area()
		{
			a=ret_b()*ret_l();
			cout<<"rectangle's area: "<<a<<endl;
		}
};
class triangle: public shape
{
	double a;
	public:
		void get_data(double c, double d)
		{
			shape::get_data(c,d);
		}
		void display_area()
		{
			a=0.5*ret_b()*ret_l();
			cout<<"triangle area: "<<a<<endl;
		}
};
class rectangle: public shape
{
	double a;
	public:
		void get_data(double c, double d)
		{
			shape::get_data(c,d);
		}
		void display_area()
		{
			a=ret_b()*ret_l();
			cout<<"rectangle's area: "<<a<<endl;
		}
};
class circle: public shape
{
	double a;
	public:
		void get_data(double c)
		{
			shape::get_data(c);
		}
		void display_area()
		{
			a=3.14*pow(ret_l(),2);
			cout<<"Circle's area: "<<a<<endl;
		}
};
int main()
{
	shape *sptr;
	shape s1;
	triangle t1;
	rectangle r1;
	circle c1;
	int c;
	double a,b;
	while(true)
	{
		cout<<"Enter your choice: ";
		cout<<"1.for triangle\n2.for rectangle\n3.for circle\n4.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"Enter base and height: ";
					cin>>a>>b;
					sptr=&t1;
					sptr->get_data(a,b)
					sptr->display_area();
					break;
			case 2: cout<<"Enter length and breadth: ";
					cin>>a>>b;
					rectangle r1(a,b);
					sptr=&r1;
					sptr->display_area();
					break;
			case 3: cout<<"Enter radius: ";
					cin>>a;
					circle c1(a);
					sptr=&c1;
					sptr->display_area();
					break;
			case 4: exit;break;
			default: cout<<"Wrong choice";
		}
	}
	return 0;
}