#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two numbers:"<< endl;
	int v1, v2;

	cin >> v1 >>v2;

	int lower, upper;
	if(v1 <= v2){
		lower = v1;
		upper = v2;
	} else {
		lower = v2;
		upper = v1;
	}

	cout << "Values of"<<lower << "to"<<upper << "inclusive are:"<<endl;
	for(int val = lower; val <= upper; ++val)
		cout << val << "  ";

	return 0;
}
