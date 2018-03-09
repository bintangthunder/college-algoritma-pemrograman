#include <cstdio>

using namespace std;

int main(){
    int angka;
    float koma1, koma2;
    printf("Masukan nilai koma1 dan koma2 = ");
    scanf("%d %f", &angka, &koma1);
    koma2 = angka + koma1;
    printf("Hasil penjumlahan = %f", koma2);

    return 0;
}