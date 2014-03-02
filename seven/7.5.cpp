#include <iostream>
using namespace std;

const int max(const int a, const int *b)
{
	return a > *b? a: *b;
}

int main()
{
	int a(3),b(2);

     cout <<	max(a, &b) << endl;

	 return 0;
}
