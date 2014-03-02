#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<string> str1;
	string         str2;

	while(cin >> str2)
	{
		str1.push_back(str2);
	}

	if(str1.size() == 0)
	{
		cout << "the string is empty"
			 << endl;
	}

	for(vector<string>::size_type ix = 0; ix != str1.size(); ix++)
	{
		for(string::size_type iz = 0; iz != str1[ix].size(); iz++)
		{
			if(islower(str1[ix][iz]))
				str1[ix][iz] = toupper(str1[ix][iz]);

			if((ix + 1) % 8 == 0)
				cout << endl;
		}

			cout << str1[ix] << " ";
	}
	cout << endl;
	return 0;
}

