#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
	int ival;

	cout << "enter numbers:ctrl+d to end" << endl;
	while(cin >> ival)
	{
		ivec.push_back(ival);
    }

	int *pla = new int [ivec.size()];
	int *tp = pla;

	for(vector<int>::iterator iter = ivec.begin(); 
			       iter != ivec.end(); ++iter, ++tp)
		*tp = *iter;

	delete [] pla;

	return 0;
}
