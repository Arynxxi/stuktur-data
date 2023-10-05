#include <iostream>
using namespace std;

int main(){
    double nilai;
    char indeks;

    cout<<"Masukkan Nilai yang Diperoleh = ";
    cin>>nilai;

    if (nilai >= 85){
        indeks = 'A';
    } else if (nilai >= 70){
        indeks = 'B';
    } else if (nilai >= 55){
        indeks = 'C';
    } else if (nilai >= 40){
        indeks = 'D';
    } else {
        indeks = 'E';
    }

    cout<<endl;
    cout<<"Nilai indeks dari nilai "<<nilai<<" adalah "<<indeks<<endl;
}