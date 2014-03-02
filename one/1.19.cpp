#include <iostream>
using namespace std;

int main()
{
	int lower = 1000;
	int upper = 2000;
	int num = 1;

	for(; lower <= 2000; lower++,num++)
	{
		cout << lower<<"   " ;
		if(num%10 == 0)
		cout << endl;
	}

	return 0;
}
