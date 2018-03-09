#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string str1 = "Hello", str2 = "World";
    string str3 = str1;

    cout << "str3 = " << str3 << endl;
    cout << "str1 + str2 = " << str1 + str2 << endl;
    cout << "str2 panjang = " << str2.length() << endl;
    cout << "str1 substring(1,4) = " << str1.substr(1,4) << endl;

    return 0;
}