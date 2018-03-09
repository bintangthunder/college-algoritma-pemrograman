#include <cstdio>
#include <iostream>

using namespace std;

void cetakArray (int arr[], int length) {
    for (int n = 0; n < length; ++ n)
        cout << arr[n] << ' ';
    cout << '\n';
}

int main(){
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};

    cetakArray(firstarray, 3);
    cetakArray(secondarray, 5);

    return 0;
}