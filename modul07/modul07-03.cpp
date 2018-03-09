#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int a = 100, b = 200, *pa, *pb;
    pa = &a;
    pb = &b;

    if (pa > pb)
        printf("alamat memori a > alamat memori b, %d > %d", pa, pb);
    else if (pa == pb)
        printf("alamat memori a = alamat memori b, %d = %d", pa, pb);
    else if (pa < pb)
        printf("alamat memori a < alamat memori b, %d < %d", pa, pb);

    return 0;
}