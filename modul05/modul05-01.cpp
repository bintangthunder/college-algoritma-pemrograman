#include <cstdio>
#include <iostream>

using namespace std;

int data = 100;

void fungsi_satu(){
    int data = 300;
    cout << "fungsi 1 = " << data << endl;
}

void fungsi_dua(){
    int data = 100;
    cout << "fungsi 2 = " << data << endl;
}

int main(){
    int data = 200;
    fungsi_satu();
    fungsi_dua();
    cout << "fungsi utama = " << data << endl;

    return 0;
}