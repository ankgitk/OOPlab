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
				temp.gr%=100;
				temp.kg+=1;
			}
			return temp;
		}
		void show()
		{
			cout<<kg<<" kilogram(s)	"<<gr<<" gram(s)\n";
		}
};

int main()
{
	weight w1(7,4);
	weight w2(5,3);
	weight w3;
	w3=w2+w1;
	w3.show();
	return 0;
}