#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a, b, pangkat, hasil;

    cout << "Program perulangan untuk operasi pangkat";
    cout << " (A pangkat B)\n";
    cout << "masukkan bilangan pokok (A) : "; cin >> a;
    cout << "masukkan nilai pangkat (B) : ";
    cin >> b;

    hasil = 1; //nilai identitas perkalian

    for (pangkat = 0; pangkat < b; pangkat ++)
        hasil *= a;

    cout << "hasil dari " << a << " pangkat " << b << " adalah " << hasil << endl;
    return 0;
}