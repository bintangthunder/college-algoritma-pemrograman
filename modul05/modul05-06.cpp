#include <iostream>
#include <cstdio>

using namespace std;

long faktorial (long a){
    if (a > 1)
        return (a * faktorial (a-1));
    else
        return (1);
}

int main(){
    long n;
    cout << "Masukkan sebuah angka: ";
    cin >> n;
    cout << n << "! = " << faktorial(n);

    return 0;
}