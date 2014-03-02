#include <iostream>
using namespace std;

int main()
{
	string       str1;
	string       str2;
    size_t    l1;
	size_t    l2;

	getline(cin, str1);
	getline(cin, str2);

	l1 = str1.size();
	l2 = str2.size();

	if(l1 > l2)
	{
		cout << "l1 > l22" << endl;
	}  else if(l1 == l2)
	{
		cout << "l1 == l2"<< endl;
	} else {
		cout << "l1 < l2"<< endl;
	}

	return 0;
}
