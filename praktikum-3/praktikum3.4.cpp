#include <iostream>
using namespace std;

struct Mahasiswa{
    string nim, nama, jurusan;
    int umur;
    string ekskul[3];
}mhs1, mhs2;

int main(){
    mhs1 = {"202002234", "Aminah", "Teknik Informatika", 19, {"HIMTI", "Badminton Club", "UKHMI"}};

    mhs2.nim = "202002252";
    mhs2.nama = "Ardito";
    mhs2.jurusan = "Sistem Informasi";
    mhs2.umur = 20;
    mhs2.ekskul[0] = "HIMASISFOR";
    mhs2.ekskul[1] = "Football Club";
    mhs2.ekskul[2] = "PMKO";

    cout<<"NIM Mahasiswa : "<<mhs1.nim<<endl;
    cout<<"Nama Mahasiswa : "<<mhs1.nama<<endl;
    cout<<"Jurusan Mahasiswa : "<<mhs1.jurusan<<endl;
    cout<<"Umur Mahasiswa : "<<mhs1.umur<<endl;\
    cout<<"Ekskul 1: "<<mhs1.ekskul[0]<<endl;
    cout<<"Ekskul 2: "<<mhs1.ekskul[1]<<endl;
    cout<<"Ekskul 3: "<<mhs1.ekskul[3]<<endl;

    cout<<"\nNIM Mahasiswa : "<<mhs2.nim<<endl;
    cout<<"Nama Mahasiswa : "<<mhs2.nama<<endl;
    cout<<"Jurusan Mahasiswa : "<<mhs2.jurusan<<endl;
    cout<<"Umur Mahasiswa : "<<mhs2.umur<<endl;
    cout<<"Ekskul 1: "<<mhs2.ekskul[0]<<endl;
    cout<<"Ekskul 2: "<<mhs2.ekskul[1]<<endl;
    cout<<"Ekskul 3: "<<mhs2.ekskul[2]<<endl;
}