#include <cstdio>
#include <iostream>

using namespace std;

void tukarNilai(int *j, int *k){
    int temp = *j;
    *j = *k;
    *k = temp;
}

int main(){
    int a = 20, b = 10;
    printf("nilai a : %d dan nilai b : %d\n", a, b);

    tukarNilai(&a, &b);
    printf("nilai a : %d dan nilai b : %d\n", a, b);

    return 0;
}