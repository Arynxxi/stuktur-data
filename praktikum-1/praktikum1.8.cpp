#include <iostream>
using namespace std;

int main(){
    char A[7] = {'A', 'N', 'N', 'I', 'S', 'A'};
    char B[6] = "Nurul";

    for(int a = 0; a < 6; a++){
        cout<<A[a];
    }
    cout<<endl;

    cout<<B;
    cout<<"\n\n";

    cout<<"Ukuran A : "<<sizeof(A)<<endl;
    cout<<"Ukuran B : "<<sizeof(B)<<endl;
}