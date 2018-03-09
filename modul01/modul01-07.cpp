#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char nama[20];
    puts("Masukan nama = "); 
    
    // using combination of fgets
    fgets(nama, 20, stdin);
    puts("Senang bertemu dengan ");
    puts(nama);

    return 0;
}