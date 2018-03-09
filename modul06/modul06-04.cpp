#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myVector;
    
    cout << "Panjang awal vector: " << myVector.size() << endl;
    myVector.push_back(5);

    cout << "Panjang vektor setelah ditambahkan elemen: " << myVector.size() << endl;
    cout << "Isi vektor pada index 0: " << myVector[0];
    getchar();

    return 0;
}