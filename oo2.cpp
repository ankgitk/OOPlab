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
		weight operator + (weight w)
		{
			weight temp;
			temp.kg=kg+w.kg;
			temp.gr=gr+w.gr;
			if (temp.gr>1000)
			{
				temp.gr%=1000;
				temp.kg+=1;
			}
			cout<<temp.kg<<temp.gr;
			return temp;
		}
		weight operator - (weight w)
		{
			weight temp;
			temp.kg=kg-w.kg;
			temp.gr=gr-w.gr;
			return temp;
		}
		weight operator ++ ()
		{
			weight temp;
			++kg;
			temp.kg=kg;
			++gr;
			temp.gr=gr;
			return temp;
		}
		weight operator -- ()
		{
			weight temp;
			temp.kg=--kg;
			temp.gr=--gr;
			return temp;
		}
		weight operator = (weight w)
		{
			weight temp;
			kg=w.kg;
			temp.kg=kg;
			gr=w.gr;
			temp.gr=gr;
			return temp;
		}
		void show()
		{
			cout<<kg<<" kilogram(s)	"<<gr<<" gram(s)\n";
		}
};

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