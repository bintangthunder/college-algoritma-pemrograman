#include <iostream>
#include <cstdio>

using namespace std;


int addition(int a, int b){	
    int r = a + b;	
    
    return(r);
}	

int main(){
    int z, x = 5, y = 3;
    z = addition(x, y);
    
    cout << "Hasilnya ialah " << z << endl;
    
    return 0;
}