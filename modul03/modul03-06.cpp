#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int pilih;
    
    cout << "Warna\n\n";
    cout << "1." << "\t" << "Merah\n";
    cout << "2." << "\t" << "Biru\n";
    cout << "3." << "\t" << "Hijau\n";
    cout << "4." << "\t" << "Kuning\n";
    cout << "5." << "\t" << "Putih\n\n";

    cout << "Pilih Warna Yang Kamu Suka: "; cin >> pilih;

    switch(pilih){
        case 1: cout << "Merah Melambangkan Keberanian dan Energik\n\n"; break;
        case 2: cout << "Biru Melambangkan Kelembutan dan Kedinamisan\n\n"; break;
        case 3: cout << "Hijau Melambangkan Keseimbangan dan Persahabatan\n\n"; break;
        case 4: cout << "Kuning Melambangkan Kebijaksanaan\n\n"; break;
        case 5: cout <<  "Putih Melambangkan Kesucian\n\n"; break;

        default: cout << "Warna tidak ditemukan!! \n"; break;
    }

    return 0;
}