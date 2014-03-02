#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> i1;
    int i2;

	while(cin >> i2)
	{
		i1.push_back(i2);
	}

	if(i1.size() == 0)
	{
		cout << "the calue is empty"<< endl;
	}

	for(vector<int>::size_type ix = 0; ix <= i1.size()/2; ix++)
	{
		if(i1.size()%2 != 0)
		{
			if(ix == i1.size()/2)
			{
				cout << i1[ix]<<endl;
		        break;
			}
		}

		cout << i1[ix]+i1[i1.size() - ix - 1] << "  ";

		if((ix+1)%6 == 0)
			cout <<endl;

	}

	return 0;
}
