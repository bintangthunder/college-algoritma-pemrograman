#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int nilai[3], *petunjuk;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    petunjuk = &nilai[0];

    printf("Nilai %i ada dialamat memori %p\n", *petunjuk, petunjuk);
    printf("Nilai %i ada dialamat memori %p\n", *(petunjuk + 1), petunjuk + 1); 
    printf("Nilai %i ada dialamat memori %p\n", *(petunjuk + 2), petunjuk + 2); 

    return 0;
}