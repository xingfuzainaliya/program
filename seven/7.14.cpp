#include <iostream>
#include <vector>
using namespace std;


void plus1(vector<double>::const_iterator beg,
			vector<double>::const_iterator end)
{
	    int tmp = 0;

        while(beg != end)
		{
		     tmp += *beg++;
		}

		cout << "tmp = "<< tmp << endl;
}
int main()
{
	vector<double> vedo(10, 2.0);

	plus1(vedo.begin(), vedo.end());

    return 0;
}
