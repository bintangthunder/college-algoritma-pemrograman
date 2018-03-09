#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f,g,h;

    cout << "Masukkan nilai A : "; cin >> a;
    cout << "Masukkan nilai B : "; cin >> b;
    cout << "Masukkan nilai C : "; cin >> c;

    d = 5 - a < 3;
    e = b > a + 2;
    f = c + 5 >= 3;
    g = d || e || f;
    h = d && e && f;

    cout << endl;
    cout << "Program ekspresi logika" << endl; 
    cout << "Hasil dari D = 5 - A < 3 adalah " << d << endl; 
    cout << "Hasil dari E = B > A + 2 adalah " << e << endl; 
    cout << "Hasil dari F = C + 5 >= 3 adalah " << f << endl; 
    cout << "Hasil dari G = D || E || F adalah " << g << endl; 
    cout << "Hasil dari H = D && E && F adalah " << h << endl;

    return 0;
}