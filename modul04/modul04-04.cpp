#include <iostream>
#include <cstdio>

using namespace std;

float nilai, jumlah, banyakData;
float rata2;

int main(){
    cout << "Program Perulangan While 2" << endl;
    cout << "Menghitung Rata - Rata Nilai" << endl;
    cout << "Akhiri Program Dengan Memasukkan nilai negatif" << endl; 
    
    jumlah = 0;
    banyakData = 0;

    cout << "Masukkan Nilai : "; cin >> nilai;

    while (nilai >= 0){
        banyakData ++;
        jumlah = jumlah + nilai;

        cout << "Masukkan Nilai : "; cin >> nilai;
    }

    cout << "Banyak Data : " << banyakData << endl;
    cout << "Jumlah Nilai : " << jumlah << endl;

    if(banyakData != 0){
        rata2 = jumlah / banyakData;
        cout << "Rata - rata Nilai : " << rata2 << endl;
    }

    else{
        cout << "Tidak Ada Data Yang Dimasukkan" << endl;
    }

    return 0;
}