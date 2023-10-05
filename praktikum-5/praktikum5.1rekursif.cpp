#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1){
        return 0;
    } else {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(){
    int n, i, j = 0;
    cout<<"Batas deret : ";
    cin>>n;
    cout<<"Deret Fibonacci : \t";

    for(i = 1; i <= n; i++){
        cout<<"F1"<< i <<" : ";
        cout<<fibonacci(j)<<endl;
        j++;
    }
    return 0;
}