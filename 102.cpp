#include "iostream"
#include "cmath"
using namespace std;
class shape
{
	double l,b;
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
			cout<<"No shape yet";
		}
};
class triangle: public shape
{
	double a;
	public:
		triangle(double c, double d)
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
		rectangle(double c, double d)
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
		circle(double c)
		{
			shape::get_data(c);
		}
		void display_area()
		{
			double t;
			t=ret_l();
			a=3.14*pow(t,2);
			cout<<"Circle's area: "<<a<<endl;
		}
};
int main()
{
	shape *sptr;
	shape s1;
	triangle t1(4,5);
	rectangle r1(4,5);
	circle c1(4);
	sptr=&c1;
	sptr->display_area();
	sptr=&t1;
	sptr->display_area();
	sptr=&r1;
	sptr->display_area();
	return 0;
}