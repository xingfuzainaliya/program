#include <iostream>
#include <map>
#include <utility>
#include <string>
using namespace std;

int main()
{
	map<string, int> word_count;
	string str;

	while(cin >> str) {
		pair<map<string, int>::iterator, bool> ret
		  =	word_count.insert(make_pair(str, 1));
		if(!ret.second)
		{
			++ret.first->second;
		}
	}

    for(map<string, int>::iterator iter = word_count.begin(); iter
				!= word_count.end(); ++iter)
	{
		cout << iter->first << "  " << iter->second <<endl;
	}

	return 0;
}

    
