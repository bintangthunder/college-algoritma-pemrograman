#include <cstdio>

using namespace std;

int main(){
    char nama[20], nama2[20];
    
    printf("Masukan nama anda ");
    fgets(nama, 20, stdin);

    printf("Masukan nama lain ");
    fgets(nama2, 20, stdin);

    printf("\n\nHallo %s nama saya ", nama2);
    puts(nama2);

    printf("Senang berkenalan dengan anda %s", nama2);
    puts("Sampai bertemu lagi ");
    puts(nama2);
}