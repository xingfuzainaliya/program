#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item book;

	cout << "Enter transactions:"<<endl;

	while(cin >> book) {
		cout << "ISBN number of copies sold,"
			 << "total revenue, and average price are:"
			 <<endl;
		cout << book <<endl;
	}
	return 0;
}
