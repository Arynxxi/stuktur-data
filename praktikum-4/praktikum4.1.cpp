#include<iostream>
using namespace std;

int main(){
    int baris1, kolom1, baris2, kolom2;
    int a, b, c, sum=0;

    cout<<"Masukkan jumlah baris matriks A = ";
    cin>>baris1;
    cout<<"Masukkan jumlah kolom matriks A = ";
    cin>>kolom1;
    cout<<"Masukkan jumlah baris matriks B = ";
    cin>>baris2;
    cout<<"Masukkan jumlah kolom matriks B = ";
    cin>>kolom2;
    
    cout<<endl;
    
    int A[baris1][kolom1], B[baris2][kolom2], C[baris1][kolom2];

    if(kolom1 != baris2){
    	cout<<"Operasi tidak dapat dilakukan."<<endl;
    	return 0;
	}
        for(a = 0; a < baris1; a++){
            for(b = 0; b < kolom1; b++){
                cout<<"Matriks A ["<<a+1<<"]""["<<b+1<<"] = ";
                cin>>A[a][b];
            }
        }
        cout<<"\n";
        
        	for(a = 0; a < baris2; a++){
        		for(b = 0; b < kolom2; b++){
            		cout<<"Matriks B ["<<a+1<<"]""["<<b+1<<"] = ";
            		cin>>B[a][b];
             	}
        	}
   	for(a = 0; a < baris1; a++){
		for(b = 0; b < kolom2; b++){
			for(c = 0; c < baris2; c++){
				sum = sum + A[a][c] * B[c][b];
			}
			C[a][b] = sum;
			sum = 0;
		}
	}
	
	cout<<"\nHasil perkalian matriks : "<<endl;
	for(a = 0; a < baris1; a++){
		for(b = 0; b < kolom2; b++){
			cout<<C[a][b ]<<" ";
		}
		cout<<endl;
	}
}