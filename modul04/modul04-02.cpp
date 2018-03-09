#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

int a, b, c, hasil;
char pilihan;

int main(){
    cout << "Program Luas balok" << endl;

    ulang:
    cout << "masukkan panjang : "; cin >> a;
    cout << "masukkan lebar	: "; cin >> b;
    cout << "masukkan tinggi : "; cin >> c;
    
    hasil = (2 * a * b) + (2 * b * c) + (2 * a * c);

    cout << "Luas balok Adalah " << hasil << endl;
    cout << "Apakah Anda Ingin Mengulang Program (Y/N) ?" << endl;
    pilihan = getche();
    cout << endl;

    //kondisi yang harus dipenuhi statement goto
    if(pilihan == 'Y' || pilihan == 'y')
    goto ulang;

    return 0;
}