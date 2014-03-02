#include <iostream>
using namespace std;

int main()
{
	int amout = 0, value;

	while(cin >> value)
	{
		  if(value < 0)
		  {
                amout ++;
		  }
	}

	cout << "all amount of negative value is"
		 <<amout
		 <<endl;
	return 0;
}
	   

