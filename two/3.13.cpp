#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>  i;
    int i1;

	while(cin >> i1)
	{
		i.push_back(i1);
	}

    for(vector<int>::size_type  ix = 0;ix != i.size(); ix += 2)
	{
		if(i.size()%2 != 0)
		{
			if(ix == i.size() - 1)
			{
				cout << i[ix];
				break;
			}
		}

		cout << i[ix] + i[ix + 1]<< "  ";
	}
	cout << endl;
	return 0;
}

