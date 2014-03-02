#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream  ofs;
	ofs.open("test.txt");

//	cin.tie (&ofs);

	*cin.tie() << "there will be some text:";
	char c;

	while(cin >> c){
		ofs << c;
	}

	ofs.close();
	return 0;
}
