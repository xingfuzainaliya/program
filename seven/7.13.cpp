#include <iostream>
using namespace std;

void  plus5( int (&a)[5])
{
	int tmp =a[0] + a[1] + a[2] + a[3] + a[4];
cout<<"emp = " << tmp<<endl;
}

void plus1(const int * beg, const int * end)
{
	int tmp = 0;
	while(beg != end)
	  tmp +=  *beg++;
	cout << tmp << endl;
}

void plus2(const int *a, const int b)
{
	int tmp = 0;
	for(int i = 0; i < b; ++i)
	{
	      tmp += a[i];
	}

	cout << tmp << endl;
}
int main()
{
	int a[5]={'1','2','3','4','5'};

    plus5(a);
	plus1(a, a + 5);
	plus2(a, 5);

	return 0;
}
