#include <utility>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int>  word_count;
    string str;

	while(cin>>str){
		++word_count[str];
	}

	map<string, int>::iterator map_it = word_count.begin();

    while(map_it != word_count.end())
	{
		cout << map_it->first << " time " << map_it->second <<endl;
		map_it++;
	}
}
