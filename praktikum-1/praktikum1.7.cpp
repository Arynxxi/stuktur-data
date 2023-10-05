#include <iostream>
using namespace std;

int main(){
    int A[10] = {14, 255, 4, 78, 90, 15, 33, 92, 19, 51};
    int bil;

    for(int a = 0; a < 10; a++){
        cout<<"Index ke-"<<a<<" : "<<A[a]<<endl;
    }
    cout<<endl;

    cout<<"Masukkan Nilai yang Akan dicari : ";
    cin>>bil;

    for(int b = 0; b < 10; b++){
        if (A[b] == bil){
            cout<<"Nilai yang dicari terdapat pada index ke-"<<b;
            break;
        }
        
    }
}