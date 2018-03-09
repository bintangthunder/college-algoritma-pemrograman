#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int matA[2][2]={{2, 4}, {1, 2}};
    int matB[2][2]={{1, 2}, {4, 5}};

    int a, b;
    int matKali[2][2];

    for(int i = 0; i < 2; i ++)
        for(int j = 0; j < 2; j ++){
            matKali[i][j] = 0;
            for(int k = 0; k < 2; k ++)
                matKali[i][j] += (matA[i][k]*matB[k][j]);
        }   

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++)
            cout << matKali[i][j] << "\t";

        cout << endl;
    }

    return 0;
}