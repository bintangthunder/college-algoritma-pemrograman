#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int val1, val2, min, max;

    cout << "Nilai pertama : "; cin >> val1;
    cout << "Nilai kedua : "; cin >> val2;

    min = (val1 < val2) ? val1 : val2;
    max = (val2 > val1) ? val2 : val1;

    cout << "Nilai minimum = " << min << " dan nilai maksimum = " << max; 

    return 0;
}