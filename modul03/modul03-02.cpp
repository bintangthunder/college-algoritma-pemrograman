#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Berapa Usia Anda ?";
    cout << "\nJawaban = "; cin >> n;

    if (n <= 17)
        cout << " \n\nMaaf !! Anda belum bisa buat KTP ^_^ \n";

    else
        cout<< " \n\nAnda sudah bisa buat KTP ^_^ \n";

    return 0;
}