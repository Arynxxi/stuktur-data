#include <iostream>
using namespace std;

int main(){
    int bil;

    cout<<"Bilangan yang diinginkan = ";
    cin>>bil;

    if (bil % 2 == 0){
        cout<<endl;
        cout<<bil<<" adalah bilangan GENAP"<<endl;
    } else {
        cout<<endl;
        cout<<bil<<" adalah bilangan GANJIL"<<endl;
    }
}