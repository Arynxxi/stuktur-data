#include <iostream>
using namespace std;

int main(){
    int A[5];

    cout<<"Masukkan Nilai yang diinginkan"<<endl;

    for(int c = 0; c < 5; c++){
        cout<<"A["<<c<<"]= ";
        cin>>A[c];
    }

    cout<<'\n';

    cout<<"Menampilkan Nilai yang Telah dimasukkan"<<endl;
    
    cout<<"============================================"<<endl;
    
    for(int d = 0; d < 5; d++){
        cout<<"Nilai yang Terdapat Pada Elemen Ke-";
        cout<<d + 1<<" : "<<A[d]<<endl;

    }
}