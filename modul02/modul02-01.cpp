#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int bil1, bil2, bil3;

    bil1 = 2 * 4 + 5 * 4;
    bil2 = 20 + 20 / (5 + 5) % 2;
    bil3 = ((2 + 3) + 6 * (3 + (4 - 2))) + 3;

    printf("hasil dari 2 * 4 + 5 * 4 = %d", bil1);
    printf("hasil dari 20 + 20 / (5 + 5) mod 2 = %d", bil2);
    printf("hasil dari ((2 + 3) + 6 * (3 + (4 - 2))) + 3 = %d", bil3);

    return 0;
}