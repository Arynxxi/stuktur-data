#include <iostream>
using namespace std;

int main(){
    int bil;

    cout<<"Masukkan sebuah bilangan (1-7) : ";
    cin>>bil;

    switch (bil){
        case 1 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Ahad.";
        break;
        case 2 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Senin.";
        break;
        case 3 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Selasa.";
        break;
        case 4 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Rabu.";
        break;
        case 5 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Kamis.";
        break;
        case 6 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Jumat.";
        break;
        case 7 : 
        cout<<"hari ke-"<<bil<<" adalah Hari Sabtu.";
        break;
        default :cout<<"Tidak terdapat hari ke-"<<bil;
    }
    
}