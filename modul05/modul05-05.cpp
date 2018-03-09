#include <iostream>
#include <cstdio>

using namespace std;

float operasi(int a, float b){
    return (a * b);
}

float operasi(float a, int b){
    return (a / b);
}

int main(){
    int x = 5, y = 4;
    float n = 2.3, m = 2.2;
    cout << operasi (x,y) << "\n";
    cout << operasi (n,m) << "\n";

    return 0;
}