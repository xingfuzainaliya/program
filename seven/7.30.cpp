#include <iostream>
#include <string>
using namespace std;

inline string  isShorter(const string & str1, const string & str2)
{
       return   (str1.size() > str2.size())? str1:str2;
}

int main()
{
    cout << isShorter("abcdadfasdfsdfdsa", "efgh") << endl;
    return  0;
}
