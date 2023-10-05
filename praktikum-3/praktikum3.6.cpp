#include <iostream>
using namespace std;

struct Mahasiswa{
    string nim, nama, prodi;
    int nilai[3];
};

int main(){
	Mahasiswa mhs[5];
	
    mhs[0] = {"20212205044", "Ahmad Bukhari", "Teknik Informatika", {20212205044, 85, 90}};
    
    cout<<"NIM Mahasiswa\t \t: "<<mhs[0].nim<<endl;
    cout<<"Nama Mahasiswa\t \t: "<<mhs[0].nama<<endl;
    cout<<"Prodi Mahasiswa\t \t: "<<mhs[0].prodi<<endl;
    cout<<"Algoritma Pemrograman\t: "<<mhs[0].nilai[0]<<endl;
    cout<<"Struktur Dasar\t \t: "<<mhs[0].nilai[1]<<endl;
    cout<<"Pemrograman Dasar\t: "<<mhs[0].nilai[2]<<endl;
    
    mhs[1]= {"20212205081", "Ansyen Cherry", "Teknik Informatika", {90, 90, 90}};
    
    cout<<"\nNIM Mahasiswa\t \t: "<<mhs[1].nim<<endl;
    cout<<"Nama Mahasiswa\t \t: "<<mhs[1].nama<<endl;
    cout<<"Prodi Mahasiswa\t \t: "<<mhs[1].prodi<<endl;
    cout<<"Algoritma Pemrograman\t: "<<mhs[1].nilai[0]<<endl;
    cout<<"Struktur Dasar\t \t: "<<mhs[1].nilai[1]<<endl;
    cout<<"Pemrograman Dasar\t: "<<mhs[1].nilai[2]<<endl;
    
    mhs[2]= {"20212205206", "Achmad Arief Rahmatullah", "Teknik Informatika", {90, 90, 90}};
    
    cout<<"\nNIM Mahasiswa\t \t: "<<mhs[2].nim<<endl;
    cout<<"Nama Mahasiswa\t \t: "<<mhs[2].nama<<endl;
    cout<<"Prodi Mahasiswa\t \t: "<<mhs[2].prodi<<endl;
    cout<<"Algoritma Pemrograman\t: "<<mhs[2].nilai[0]<<endl;
    cout<<"Struktur Dasar\t \t: "<<mhs[2].nilai[1]<<endl;
    cout<<"Pemrograman Dasar\t: "<<mhs[2].nilai[2]<<endl;
    
    mhs[3]= {"20212205022", "Atif Walid Ramadhan", "Teknik Informatika", {90, 90, 90}};
    
    cout<<"\nNIM Mahasiswa\t \t: "<<mhs[3].nim<<endl;
    cout<<"Nama Mahasiswa\t \t: "<<mhs[3].nama<<endl;
    cout<<"Prodi Mahasiswa\t \t: "<<mhs[3].prodi<<endl;
    cout<<"Algoritma Pemrograman\t: "<<mhs[3].nilai[0]<<endl;
    cout<<"Struktur Dasar\t \t: "<<mhs[3].nilai[1]<<endl;
    cout<<"Pemrograman Dasar\t: "<<mhs[3].nilai[2]<<endl;
    
    mhs[4]= {"20212205186", "Moh Al Rifky Tahir", "Teknik Informatika", {90, 90, 90}};
    
    cout<<"\nNIM Mahasiswa\t \t: "<<mhs[4].nim<<endl;
    cout<<"Nama Mahasiswa\t \t: "<<mhs[4].nama<<endl;
    cout<<"Prodi Mahasiswa\t \t: "<<mhs[4].prodi<<endl;
    cout<<"Algoritma Pemrograman\t: "<<mhs[4].nilai[0]<<endl;
    cout<<"Struktur Dasar\t \t: "<<mhs[4].nilai[1]<<endl;
    cout<<"Pemrograman Dasar\t: "<<mhs[4].nilai[2]<<endl;
}