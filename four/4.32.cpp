#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main()
{
	 const int arr_size = 6;
	 int int_arr[arr_size];
	 int *tp = int_arr;

	 cout << "enter 10 inters";

//	 for(int i = 0; i < arr_size; i++)
//	 {
//		 cin >> int_arr[i];
//	 }
	 while(cin >> *tp)
	 {
		 tp++;

		 if(tp == int_arr + arr_size)
			 break;
	 }

//	 cin >> int_arr;

	 vector<int> ivec(int_arr,arr_size+int_arr);

	 for(vector<int>::iterator  iter = ivec.begin(); iter != ivec.end(); iter++)
	 {
		 cout << *iter<< "  ";
	 }

	 cout << endl;

	 return 0;
}



