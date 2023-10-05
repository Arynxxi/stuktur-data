#include <iostream>
using namespace std;

int main(){
    typedef int matrik32 [3][2];

    matrik32 A, B, C;

    int a, b;

    for(a = 0; a < 3; a++){
        for(b = 0; b < 2; b++){
            cout<<"A["<<a<<"] ["<<b<<"] = ";
            cin>>A[a][b];
        }
    }

    cout<<endl;

    for(a = 0; a < 3; a++){
        for(b = 0; b < 2; b++){
            cout<<"B["<<a<<"] ["<<b<<"] = ";
            cin>>B[a][b];
        }
    }

    cout<<endl;

    for(a = 0; a < 3; a++){
        for(b = 0; b < 2; b++){
            C[a][b] = A[a][b] + B[a][b];
        }
    }

    for(a = 0; a < 3; a++){
        for(b = 0; b < 2; b++){
            cout<<"C["<<a<<"] ["<<b<<"] = "<<C[a][b]<<endl;
        }
    }
}