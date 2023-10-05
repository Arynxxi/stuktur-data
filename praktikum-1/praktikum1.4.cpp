#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char S1[50];
    char* S2;

    S2 = "Saya mencoba penyalinana string";

    strcpy(S1, S2);

    cout<<S1<<endl;
}