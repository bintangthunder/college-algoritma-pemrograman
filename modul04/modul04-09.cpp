#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int ukuran;

    do{
        cout << "masukkan ukuran persegi : ";
        cin >> ukuran;
    } while(ukuran < 1 || ukuran > 20);

    for (int i = 0; i < ukuran; i ++){
        for (int j = 0; j < ukuran; j ++){
            if (i == 0 || j == 0 || i == ukuran - 1 || j == ukuran - 1)
                cout << " * ";
            else
                cout << " ";
        }

    cout<<endl;
    }

    return 0;
}