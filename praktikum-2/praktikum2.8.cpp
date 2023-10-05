#include <iostream>
using namespace std;

int main(){
    int bil;
    long faktorial = 1;
    int c;

    cout<<"Masukkan Bilangan yang Akan Dihitung : ";
    cin>>bil;
    c= bil;
    cout<<endl;
    cout<<c<<"! = ";

    while (c >= 1){
        faktorial *= c;
        if (c  = 1){
            cout<<c<<" x ";
        } else {
            cout<<c<<" = ";
        } c--;
    } cout<<faktorial<<endl;
}