#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int a;

    cout << " Menentukan sebuah bilangan : ";
    cin >> a;

    if (a < 0 )
        cout << " " << a << " adalah bilangan negatif"; 
    else if(a == 0)
        cout << " " << a << " adalah bilangan nol";
    else
        cout << " " << a << " adalah positif";

    return 0;   
}