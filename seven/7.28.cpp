#include <iostream>
using namespace std;

int count()
{
       static size_t i = -1;

	   return ++i;
}

int main()
{
	for(size_t i = 0; i != 10; ++i)
	     cout << count() << endl;

	return 0;
}
