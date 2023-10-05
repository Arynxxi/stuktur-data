#include <iostream>
using namespace std;

struct Pribadi{
    string nama, alamat, pekerjaan;
    int umur;
    string hobi[3];
};

int main(){
    Pribadi org[2];
    org[0] = {"Azizah", "Jl. Makmur Jaya", "Karyawan Swasta", 24, {"Nonton", "Olahraga", "Shooping"}};

    cout<<"Nama: "<<org[0].nama<<endl;
    cout<<"Alamat: "<<org[0].alamat<<endl;
    cout<<"Pekerjaan: "<<org[0].pekerjaan<<endl;
    cout<<"Umur: "<<org[0].umur<<endl;
    cout<<"Hobi 1: "<<org[0].hobi[0]<<endl;
    cout<<"Hobi 2: "<<org[0].hobi[1]<<endl;
    cout<<"Hobi 2: "<<org[0].hobi[2]<<endl;

    org[1].nama = "Denny";
    org[1].alamat = "Jl. Gotong Royong";
    org[1].pekerjaan = "PNS";
    org[1].umur = 27;
    org[1].hobi[0] = "Olahraga";
    org[1].hobi[1] = "Memancing";
    org[1].hobi[2] = "Main Game";

    cout<<"\nNama: "<<org[1].nama<<endl;
    cout<<"Alamat: "<<org[1].alamat<<endl;
    cout<<"Pekerjaan: "<<org[1].pekerjaan<<endl;
    cout<<"Umur: "<<org[1].umur<<endl;
    cout<<"Hobi 1: "<<org[1].hobi[0]<<endl;
    cout<<"Hobi 2: "<<org[1].hobi[1]<<endl;
    cout<<"Hobi 2: "<<org[1].hobi[2]<<endl;
}