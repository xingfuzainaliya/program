#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int i;

	cout << "请输入数字:"<< endl;

	while(cin >> i)
	{
		ivec.push_back(i);
	}

	const int arr_size = 10;
	int arr_int[arr_size];
   
	int z = 0;
	for(vector<int>::iterator iter = ivec.begin();iter != ivec.end();z++, iter++)
	{
         arr_int[z] = *iter;
	}

    for(int j = 0; j < arr_size; j++)
	{
		cout << arr_int[j];
	}
	return 0;
}
