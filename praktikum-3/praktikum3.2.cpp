#include <iostream>
using namespace std;

struct Mahasiswa{
    string nim, nama, jurusan;
    int umur;
};

int main(){
    Mahasiswa mhs3;

    mhs3.nim = "2020022764";
    mhs3.nama = "Budi";
    mhs3.jurusan = "Sistem Informasi";
    mhs3.umur = 20;

    cout<<"NIM Mahasiswa : "<<mhs3.nim<<endl;
    cout<<"Nama Mahasiswa : "<<mhs3.nama<<endl;
    cout<<"Jurusan Mahasiswa : "<<mhs3.jurusan<<endl;
    cout<<"Umur Mahasiswa : "<<mhs3.umur<<endl;
}