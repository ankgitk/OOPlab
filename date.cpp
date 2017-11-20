#include "iostream"
using namespace std;
class date
{
	int day,month,year;
	public:
		date(int a,int b,int c)
		{
			day=a;
			month=b;
			year=c;
		}
		void setday(int a)
		{
			day=a;
		}
		void setmonth(int a)
		{
			month=a;
		}
		void setyear(int a)
		{
			year=a;
		}
		void print_sdate()
		{
			if (day<10)
				cout<<"0"<<day<<"-";
			else
				cout<<day<<"-";
			if (month<10)
				cout<<"0"<<month<<"-";
			else
				cout<<month<<"-";
			cout<<year<<endl;
		}
		void print_ldate()
		{
			char months[12][20]={"January","Februaury","March","April","May","June","July","August","September","October","November","December"};
			cout<<"\n"<<months[month-1]<<" "<<day<<","<<year<<endl;
		}
};
int main()
{
	int a,b,c;
	cout<<"Enter day,month,year\n";
	cin>>a>>b>>c;
	date d1(a,b,c);
	d1.print_sdate();
	d1.print_ldate();
	return 0;
}