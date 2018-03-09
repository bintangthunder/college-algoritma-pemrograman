#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int nilai[5], *ptrnilai;
    ptrnilai = nilai;

    for (int i = 0; i < 5; i ++){
        cout << "Masukkan nilai ke-" << i + 1 << " = ";
        cin >> nilai[i];
    }

    cout << "\nHasil pengaksesan elemen array lewat pointer \n\n";
    for (int i = 0; i < 5; i ++)
        cout << "Elemen " << i + 1 << " nilai " << nilai[i] << " menempati alamat memori = " << &ptrnilai[i] << endl;

    return 0;
}