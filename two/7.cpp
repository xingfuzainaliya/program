#include <iostream>
using namespace std;

int main()
{
	string str1;
	string str2;
 
	cout << "input str1:";
	cin >> str1;
    cout << "input str2:";
	cin >> str2;

	if(str1 == str2)
	{
		cout << "str1 is the same as str2" <<endl;
	}
	else if(str1 > str2)
	{
		cout << "str1 > str2" << endl;
	} else
	{
		cout << "str1 < str2" << endl;
	}

	return 0;
}
