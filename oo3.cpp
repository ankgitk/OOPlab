#include "iostream"
using namespace std;
class weight
{
		int kg,gr;
	public:
		weight()
		{
			kg=0;
			gr=0;
		}
		weight(int k,int g)
		{
			kg=k;gr=g;
		}
		friend weight operator + (weight w1,weight w2);
		friend weight operator - (weight w1,weight w2);
		friend weight operator ++ (weight w1);
		friend weight operator -- (weight w1);
		//friend weight operator = (weight w1,weight w2);
		void show()
		{
			cout<<kg<<" kilogram(s)	"<<gr<<" gram(s)\n";
		}
};
weight operator + (weight w1,weight w2)
{
	weight temp;
	temp.kg=w1.kg+w2.kg;
	temp.gr=w1.gr+w2.gr;
	if (temp.gr>1000)
	{
		temp.gr%=1000;
		temp.kg+=1;
	}
	cout<<temp.kg<<temp.gr;
	return temp;
}
weight operator - (weight w1,weight w2)
{
	weight temp;
	temp.kg=w1.kg-w2.kg;
	temp.gr=w1.gr-w2.gr;
	return temp;
}
weight operator ++ (weight w)
{
	weight temp;
	temp.kg=++w.kg;
	temp.gr=++w.gr;
	return temp;
}
weight operator -- (weight w)
{
	weight temp;
	temp.kg=--w.kg;
	temp.gr=--w.gr;
	return temp;
}
/*weight operator = (weight w1,weight w2)
{
	weight temp;
	w1.kg=w2.kg;
	temp.kg=w1.kg;
	w1.gr=w2.gr;
	temp.gr=w1.gr;
	return temp;
}*/

int main()
{
	weight w1(7,900);
	weight w2(5,300);
	weight w3;
	w3=w2+w1;
	w3.show();
	w3=w1-w2;
	w3.show();
	w3=++w2;
	w3.show();
	w3=--w1;
	w3.show();
	w3=w2;
	w3.show();
	return 0;
}