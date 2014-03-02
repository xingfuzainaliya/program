#include <iostream>
using namespace std;

void change(int *a, int * b)
{
      int c;

	  c = *a;
	  *a = *b;
	  *b = c;
}

int main()
{
	int a(1),b(2);

	cout << "a = "<< a<<"   b = "<<b<<endl;
	change(&a, &b);

	cout << "a = "<< a<<"   b = "<<b<<endl;
	return 0;
}
