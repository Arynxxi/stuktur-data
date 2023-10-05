#include <iostream>
using namespace std;

int main(){
    int f1, f2, batas;
    int temp = 0;

    cout<<"Masukkan bilangan pertama : ";
    cin>>f1;
    cout<<"Masukkan batas bilangan   : ";
    cin>>batas;

    for(int a = 0; a <= batas; a++){
        temp = f1 + f2;
        cout<<temp;
        if(a != batas){
        cout<<", ";
		}
        f1 = f2;
        f2 = temp;
    }
    return 0;
}