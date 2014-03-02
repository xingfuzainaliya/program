#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>  i1;
	int          i2;

    cout << "请输入10个数字"<< endl;

	for(int i = 0; i < 10; i++)
	{
		cin >> i2;
		i1.push_back(i2);
	}

	for(vector<int>::iterator iter = i1.begin(); iter != i1.end();++iter)
	{
		*iter = 2*(*iter);
	}

    for(vector<int>::iterator iter = i1.begin(); iter != i1.end(); ++iter)
	{
		cout << *iter << "  ";
	}

	return 0;
}
