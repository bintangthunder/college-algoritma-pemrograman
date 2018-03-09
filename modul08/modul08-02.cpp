#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

struct data_alamat{
    string nama_jalan;
    string kota;
};	

class data_mhs {
    string nama;
    string nim;
    char kom;
    data_alamat alamat;
    int nilai_tugas;
    public :
        data_mhs();
        void output_data();
};

//fungsi ini jalan ketika di deklarasi kelasnya
data_mhs::data_mhs(){ 
    cout << "Masukkan nama praktikan: ";
    getline(cin,nama);

    cout << "Masukkan nim:";
    cin >> nim;
    
    cout << "Masukkan kom praktikan: ";
    cin >> kom;

    cout << "Masukkan alamat praktikan : " << endl;
    cout << "Jalan : "; cin >> alamat.nama_jalan;
    cout << "Kota  : "; cin >> alamat.kota;

    cout << "Semua data telah di input" << endl << endl;
}

void data_mhs::output_data (){
    cout << "Nama	: " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "KOM	: " << kom << endl;
    cout << "Alamat	: " << endl;
    cout << "Jalan  : " << alamat.nama_jalan << endl;
    cout << "Kota   : " << alamat.kota << endl << endl;
}

int main(){
    data_mhs mhs;
    mhs.output_data();

    return 0;
}