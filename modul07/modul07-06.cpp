#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    char fakultas[] = "FASILKOMTI"; 
    char *prodi = "Ilmu Komputer"; 
    
    cout << "Nama Fakultas = " << fakultas << endl; 
    cout << "Nama Program Studi = " << prodi << endl << endl; 
    prodi += 5;

    cout << "Nama Fakultas = " << fakultas << endl;
    cout << "Nama Program Studi  = " << prodi << endl;
    
    return 0;
}