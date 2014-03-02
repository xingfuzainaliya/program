#include <iostream>
#include <utility>
#include <vector>
#include <string>

int main()
{
	pair<string, int>  sipr;
	string str;
	int ival;
	vector< pair<string, int> >  pvec;

	cout << "enter a string  and an integer (ctral=z tp end)"
		<< endl;
	
	while(cin >> str >> ival) {
		sipr = make_pair(str, ival);
		pvec.push_back(sipr);
	}

	return 0;
}
