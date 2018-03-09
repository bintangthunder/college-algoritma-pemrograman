#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Masukkan angka untuk mulai: "; cin >> n;
    while(n > 0){
        cout<< n << ", ";
        --n;
    }

    cout << "STOP!";    

    return 0;
}