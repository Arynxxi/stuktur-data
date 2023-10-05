#include <iostream>
using namespace std;

struct Mahasiswa{
    string nim, nama, jurusan;
    int umur;
}mhs1, mhs2;

int main(){
    mhs1.nim = "202002234";
    mhs1.nama = "Badriah";
    mhs1.jurusan = "Teknik Informatika";
    mhs1.umur = 19;

    mhs2.nim = "202002252";
    mhs2.nama = "Ardito";
    mhs2.jurusan = "Sistem Informasi";
    mhs2.umur = 20;

    cout<<"NIM Mahasiswa 1: "<<mhs1.nim<<endl;
    cout<<"Nama Mahasiswa 1: "<<mhs1.nama<<endl;
    cout<<"Jurusan Mahasiswa 1: "<<mhs1.jurusan<<endl;
    cout<<"Umur Mahasiswa 1: "<<mhs1.umur<<endl;

    cout<<"\nNIM Mahasiswa 2: "<<mhs2.nim<<endl;
    cout<<"Nama Mahasiswa 2: "<<mhs2.nama<<endl;
    cout<<"Jurusan Mahasiswa 2: "<<mhs2.jurusan<<endl;
    cout<<"Umur Mahasiswa 2: "<<mhs2.umur<<endl;
}