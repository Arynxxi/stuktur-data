#include <iostream>
using namespace std;

int main(){
    int a;

    typedef struct matkul{
        long kode;
        char nama_matkul[20];
        char sks[8];
    };
    matkul A[3];

    for(a = 0; a < 3; a++){
        cout<<"Kode Matakuliah : ";
        cin>>A[a].kode;
        cout<<"Nama Matakuliah : ";
        cin>>A[a].nama_matkul;
        cout<<"SKS : ";
        cin>>A[a].sks;
        cout<<'\n';
    }

    for(a = 0; a < 3; a++){
        cout<<A[a].kode<<endl;
        cout<<A[a].nama_matkul<<endl;
        cout<<A[a].sks<<endl;
        cout<<'\n';
    }

}