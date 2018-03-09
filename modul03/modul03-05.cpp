#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a,b;

    cout << "Nilai a : "; cin >> a;
    cout << "Nilai b : "; cin >> b;
    
    if(a > b){
        if(a % 2 == 0)
            cout << a << " lebih besar dari " << b << " dan " << a << " adalah bilangan genap" << endl;
        else
            cout << a << " lebih besar dari " << b << " dan " << a << " adalah bilangan ganjil" << endl;
    }
    else{
        cout << "Nilai a tidak lebih besar dari b" << endl;
    }

    return 0;
}