#include <iostream>
using namespace std;

int main(){
    int j = 10, k;

    do{
        k = 1;
        do{
            cout<<k*j<<' ';
            k++;
        } while (k <= j);
        cout<<'\n';
        j--;
    }while (j >= 1);
}