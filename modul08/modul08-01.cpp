#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

struct data_alamat{	
	string nama_jalan;	
	string kota;	
};			

struct data_mhs {	
	string nama;	
	string nim;	
	char kom;	
	data_alamat alamat;	
	int nilai_tugas;	
};

void input_data (data_mhs &mhs){	
	cout << "Masukkan nama praktikan : "; 
    getline(cin,mhs.nama);	
	
    cout << "Masukkan nim : "; 
    cin >> mhs.nim;	
	
    cout << "Masukkan kom praktikan	: "; 
    cin>>mhs.kom;	
    
    cout << "Masukkan alamat praktikan : " << endl;
    cout << "Jalan : "; cin >> mhs.alamat.nama_jalan;
    cout << "Kota  : "; cin >> mhs.alamat.kota;

    cout << "Semua data telah di input" << endl << endl;
}

void output_data (data_mhs mhs){
    cout << "Nama   : " << mhs.nama << endl;
    cout << "NIM    : " << mhs.nim << endl;
    cout << "KOM    : " << mhs.kom << endl;
    cout << "Alamat	: " << endl;
    cout << "Jalan  : " << mhs.alamat.nama_jalan << endl;
    cout << "Kota   : " << mhs.alamat.kota << endl << endl;
}


int main(){
    data_mhs absen[3];
    absen[1].nama = "uvuvwevwevwe onyetenyevwe ugwemubwem osas";
    absen[1].nim = "171801100";
    absen[1].kom = 'A';
    absen[1].alamat.nama_jalan = "Jl. kaki cape no 3";
    absen[1].alamat.kota = "New York";

    input_data(absen[2]);

    for (int x = 1; x <= 2; x ++){
        cout << "Absen no " << x << endl;
        output_data(absen[x]);
    }

    return 0;
}