#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int matriksA[2][3]={{2, 1, 2}, {3, 4, 3}};
    int matriksB[2][3]={{1, 2, 1}, {2, 1, 3}};
    int jumlah[2][3];

    for(int i = 0; i < 2; i ++)
        for(int j = 0; j < 3; j ++)
            jumlah[i][j] = matriksA[i][j] + matriksB[i][j];

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 3; j ++)
            cout<<jumlah[i][j]<<"\t";
        
    cout << endl << endl;
    }

    return 0;
}