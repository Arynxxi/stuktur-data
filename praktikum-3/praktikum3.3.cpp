#include <iostream>
using namespace std;

struct Mahasiswa{
    string nim, nama, jurusan;
    int umur;
}mhs1;

int main(){
    Mahasiswa mhs2;

    mhs1 = {"2021022759", "Kartini", "Teknik Informatika", 19};

    mhs2.nim = "2020022764";
    mhs2.nama = "Budi";
    mhs2.jurusan = "Sistem Informasi";
    mhs2.umur = 20;

    cout<<"NIM Mahasiswa : "<<mhs1.nim<<endl;
    cout<<"Nama Mahasiswa : "<<mhs1.nama<<endl;
    cout<<"Jurusan Mahasiswa : "<<mhs1.jurusan<<endl;
    cout<<"Umur Mahasiswa : "<<mhs1.umur<<endl;

    cout<<"NIM Mahasiswa : "<<mhs2.nim<<endl;
    cout<<"Nama Mahasiswa : "<<mhs2.nama<<endl;
    cout<<"Jurusan Mahasiswa : "<<mhs2.jurusan<<endl;
    cout<<"Umur Mahasiswa : "<<mhs2.umur<<endl;
}