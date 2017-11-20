#include "iostream"
using namespace std;
class area
{
	int a,b,c;
	public:
		area()
		{
			a=0;b=0;c=0;
		}
		int ar(int p,int q=1)
		{
			a=p*p;
			cout<<"Area of square: "<<a;
		}
		/*void ar(int p,int q)
		{
			a=p*q;
			cout<<"\narea of rectangle: "<<a<<endl;
		}
		*/
};
int main()
{
	area a1;
	int i,j;
	a1.ar(2);
	a1.ar(2,3);
	return 0;
}