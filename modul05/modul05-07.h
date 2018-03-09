#include <iostream>

int pangkat(int bil, int pangkat){
    int hasil = 1;

    for(int i = 0; i < pangkat; i ++){
        hasil = hasil * bil;
    }

    cout << hasil << endl;
}