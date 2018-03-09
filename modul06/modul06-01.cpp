#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int nilai [] = {70, 65, 40, 80, 85};
    int jum = 0, mean;

    for(int i = 0; i < 5; i ++)
        jum += nilai[i];

    mean = jum / 5;
    cout << jum << "\n" << mean;

    return 0;
}