#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
     char str1[] = "zhangzhanxiong";
	 char str2[] = "liyunya";
	 char *st1 = str1;
	 char *st2 = str2;

     size_t a = strlen(str1);
	 size_t b = strlen(str2);
	
	 char *cp = new char[a+b+1];
     char *tp = cp;

	 for(int i = 0; i < a; i++,st1++, tp++)
	 {
		 *tp = *st1;
     }

	 for(int i = 0; i < b;st2++, tp++,i++)
	 {
		 *tp = *st2;
	 }

	 *tp = '\0';

	 cout << cp<<endl;

	 return 0;
}
