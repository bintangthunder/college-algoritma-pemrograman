#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    char input;

    cout << " Mengetahui inputan huruf kecil, huruf besar atau angka"; cin >> input;

    switch (input) {
        case 'a' ... 'z' :
            cout << "Huruf Kecil";
            break;
        case 'A' ... 'Z' :
            cout << "Huruf Besar";
            break;
        case '0' ... '9' :
            cout << "Angka";
            break;
        default :
            cout << "Simbol";
            break;
    }

    return 0;
}