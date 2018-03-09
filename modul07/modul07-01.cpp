#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int nilai = 100, *petunjuk;
    petunjuk = &nilai;

    cout << "variabel nilai menempati alamat memori " << &nilai << endl;
    cout << "pointer petunjuk menempati alamat memori " << petunjuk << endl; 

    return 0;
}