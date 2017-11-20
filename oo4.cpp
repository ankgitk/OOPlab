#include "iostream"
using namespace std;
class str
{
	char a[100];
	public:
		str()
		{
			strcpy(a,'');
		}
		str(char* b)
		{
			strcpy(a,b);
		}
		str operator + (str x)
		{
			str temp;
			strcat(a,x.a);
			strcpy(temp.a,a);
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	//char p[3]="def";
	//char q[3]="abc";
	str a1("def");
	str a2("abc");
	str a3;
	a3=a1+a2;
	a3.show();
	return 0;
}