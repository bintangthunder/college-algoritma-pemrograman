#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f, g, h;
    
    cout << "Masukkan nilai A : "; cin >> a;	
    cout << "Masukkan nilai B : "; cin >> b;	
    
    c = a & b;		
    d = a | b;		
    e = a ^ b;		
    f = ~a;		
    g = a << b;		
    h = a >> b;		
    
    cout << "Program Bitwise" << endl;	
    cout << "===============" << endl << endl;	
    cout << "Hasil dari C = A & B = " << c << endl;	
    cout << "Hasil dari D = A | B = " << d << endl;	
    cout << "Hasil dari E = A ^ B = " << e << endl;	
    cout << "Hasil dari F = ~ A = " << f << endl;	
    cout << "Hasil dari G = A << B = " << g << endl;
    cout << "Hasil dari H = A >> B = " << h << endl;

    return 0;
}