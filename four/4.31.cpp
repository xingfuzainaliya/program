#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string     str1;
	const int  str_size = 10;
	char       str2[str_size];

	cout << "enter a string:"<<endl;

	cin >> str1;

	size_t	len = strlen(str1.c_str());
    
	if((len+1) > str_size)
	{
		len = str_size - 1;
		cout << "string is longer than regular"<<endl;
	}

	strncpy(str2, str1.c_str(),len);
	str2[len + 1] = '\0';
	cout << str2 << endl;

	return 0;
}
