#include <iostream>
using namespace std;

string make_plural(size_t ctr, const string& word, const string &ending = "s")
{
	return (ctr == 0)?word : word + ending;
}


int main()
{
	cout << make_plural(1 , "success", "es")<<endl;;
	cout << make_plural(0, "success")<<endl;;
	cout << make_plural(1, "failure", "es") << endl;
	cout << make_plural(0, "failure") <<endl;

	return 0;
}

