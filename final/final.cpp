#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int  t, k, h;
string r, kt, tgl, jkelamin, kelas;
char jk;

struct node {
    string nama ;
    string asal; 
    string rute;
    string kode_tiket;
    string tanggal;
    char jenis_kelamin;
    int tujuan;
    int harga;
	struct node *next;
}*front = NULL, *rear, *temp;


void buy () {
	temp = new node;
	string n, a, tgl;
	char jk;
	
		cout<<"Silahkan Masukkan Data Anda"<<endl;
		cin.ignore(1,'\n');
	    cout<< "Nama\t\t  : ";
	    getline(cin, n);
	    cout<<"Jenis Kelamin [L/P] : ";
	    cin>>jk;
	    switch (jk){
	    	case 'L':{
                jkelamin = "Laki - Laki";
				break;
            }
	    	case 'P':{
                jkelamin = "Perempuan";
				break;
            }
		} 
		cout<<"Tanggal Keberangkatan [dd/mm/yyyy]: ";
		cin>>tgl;
		
		string rute;
		cout<<endl;
		
		cout<< "Silahkan Pilih Tujuan Anda"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"\t| No |\ttujuan\t\t|\tHarga\t\t|"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"\t| 1. |\tBandung\t\t|\tRp. 500.000\t|"<<endl;
		cout<<"\t| 2. |\tCirebon\t\t|\tRp. 650.000\t|"<<endl;
		cout<<"\t| 3. |\tSemarang\t|\tRp. 475.000\t|"<<endl;
		cout<<"\t| 4. |\tSurabaya\t|\tRp. 750.000\t|"<<endl;
		cout<<"\t| 5. |\tYogyakarta\t|\tRp. 800.000\t|"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"Masukkan Kota Tujuan [1/2/3/4/5]: ";
		cin>>t;
		switch(t)
			{
				system("cls");
				case 1: {
					r = "Jakarta - Bandung";
				    h = 500000;
				    kt = "JB50";
					break;
				}
				case 2: {
					r = "Jakarta - Cirebon";
				    h = 650000;
				    kt = "JC650";
					break;
				}
	            case 3: {
	            	r = "Jakarta - Semarang";
				    h = 475000;
				    kt = "JS475";
					break;
				}
	            case 4: {
	            	r = "Jakarta - Surabaya";
				    h = 750000;
				    kt = "JS750";
					break;
				}
				case 5: {
					r = "Jakarta - Yogyakarta";
				    h= 800000;
				    kt = "JY800";
					break;
				}
	            default : {
	            	cout<<"\nKota Tujuan Yang Anda Pilih Tidak Terdaftar";
	            	getch();
				}
			}
			
		cout<< "Silahkan Pilih Tujuan Anda"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"\t| No |\tKelas\t\t|\tTambahan\t|"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"\t| 1. |\tEkonomi\t\t|\tRp. 50.000\t|"<<endl;
		cout<<"\t| 2. |\tBisnis\t\t|\tRp. 150.000\t|"<<endl;
		cout<<"\t| 3. |\tVIP\t\t|\tRp. 250.000\t|"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"Masukkan Pilihan Anda [1/2/3]: ";
		cin>>k;	

		switch(k)
			{
				system("cls");
				case 1: {
					kelas = "Ekonomi";
					h += 50000;
					kt += "E";
					break;
				}
				case 2: {
					kelas = "Bisnis";
					h += 150000;
					kt += "B";
					break;
				}
	            case 3: {
	            	kelas = "VIP";
	            	h += 250000;
					kt += "V";
					break;
				}
				default : {
	            	cout<<"\nKelas Yang Anda Pilih Tidak Terdaftar";
	            	getch();
				}
			}
	
	temp -> nama = n;
	temp -> asal = a;
	temp -> jenis_kelamin = jk;
	temp -> tujuan = t;
	temp -> kode_tiket = kt;
    temp -> tanggal = tgl;
    temp -> harga = h;
    temp -> rute = r;
	temp -> next = NULL;

    if (front == NULL) {
		front = rear = temp;
	}	else {
		rear -> next = temp;
		rear = temp;
	}
}

void del() {
	if(front == NULL) {
        cout<<"Belum Ada Penumpang\n";
		getch();
	} else {
		temp = front;
		front = front -> next;
		cout<<"Kode Tiket\t\t: "<< temp -> kode_tiket<<endl;
			cout<<"Nama Penumpang\t\t: "<< temp -> nama<<endl;
			cout<<"Jenis Kelamin\t\t: "<< jkelamin<<endl;
			cout<<"Tujuan\t\t\t: "<< temp -> rute<<endl;
			cout<<"Tanggal Keberangkatan\t: "<< temp -> tanggal<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"\nMembatalkan Pembelian Tiket";
		delete(temp);
		getch();
	}
}

void cek() {
	int pil;

	cout<<"Pilih Salah Satu "<<endl;
	cout<<"1. Daftar Penumpang Sebelum Disorting"<<endl;
	cout<<"2. Daftar Penumpang Setelah Disorting"<<endl;
	cout<<"Pilih [1 atau 2] = ";
	cin>>pil;
	system("cls");
	switch (pil){
		system("cls");
				case 1: {
					if(front == NULL) {
					cout<<"Belum Ada Penumpang\n";
					getch();
			} else {
				temp = front;
				while(temp != NULL) {
					cout<<"Nama Penumpang\t\t: "<< temp -> nama<<endl;
					cout<<"Kode Tiket\t\t: "<< temp -> kode_tiket<<endl;
					cout<<"Jenis Kelamin\t\t: "<< jkelamin<<endl;
					cout<<"Tujuan\t\t\t: "<< temp -> rute<<endl;
					cout<<"Tanggal Keberangkatan\t: "<< temp -> tanggal<<endl;
					cout<<"Tiket Kelas\t\t: "<<kelas<<endl;
					cout<<"Harga Tiket\t\t: "<<"Rp. "<<temp -> harga<<endl;
					cout<<"------------------------------"<<endl;
					temp = temp -> next;
				} getch(); 
				case 2: {
					struct node *i, *j;
					string name;
					
					for(i = front; i -> next != NULL; i = i -> next){
						for(j = i -> next; j != NULL; j = j -> next){
							if (i -> nama > j -> nama){
								name = j -> nama;
								j -> nama = i -> nama;
								i -> nama = name;
							}
						}
					}
	
					if(front == NULL)
						{cout<<"Belum Ada Penumpang\n";
						getch();}
					else
					{
						temp = front;
						while(temp != NULL)
						{
							cout<<"Nama Penumpang\t\t: "<< temp -> nama<<endl;
							cout<<"Kode Tiket\t\t: "<< temp -> kode_tiket<<endl;
							cout<<"Jenis Kelamin\t\t: "<< jkelamin<<endl;
							cout<<"Tujuan\t\t\t: "<< temp -> rute<<endl;
							cout<<"Tanggal Keberangkatan\t: "<< temp -> tanggal<<endl;
							cout<<"Tiket Kelas\t\t: "<<kelas<<endl;
							cout<<"Harga Tiket\t\t: "<<"Rp. "<<temp -> harga<<endl;
							cout<<"------------------------------"<<endl;
							temp = temp -> next;
						}
					} getch();
				}
			}
		}
	}	
}
	
void cari() {
    node *temp;
    temp = front;
    string caridata;
    int ketemu = 0;
    if(front != NULL) {
        cout<<"\nInput Nama Penumpang yang dicari\t: ";
        cin>>caridata;
        while(temp != NULL) {
            temp -> nama;
            if(caridata == temp -> nama) {
                cout<<"\n\n>>>  Data Yang Anda Cari Ditemukan  <<<"<<endl;
                cout<<"Kode Tiket\t\t: "<< temp -> kode_tiket<<endl;
				cout<<"Nama Penumpang\t\t: "<< temp -> nama<<endl;
				cout<<"Jenis Kelamin\t\t: "<< jkelamin<<endl;
				cout<<"Tujuan\t\t\t: "<< temp -> rute<<endl;
				cout<<"Tanggal Keberangkatan\t: "<< temp -> tanggal<<endl;
				cout<<"Tiket Kelas\t\t: "<<kelas<<endl;
				cout<<"Harga Tiket\t\t: "<<"Rp. "<<temp -> harga<<endl;
				cout<<"------------------------------"<<endl;
                cout<<"\n\n";
            } temp = temp -> next;
        }
    } else 
    	cout<<" Belum Ada Penumpang!";
    	getch();
}

int main() {
    int pil;

    do {
    	system("cls");
        cout<<" ====================================================";
        cout<<endl;
        cout<<" \t\tSelamat Datang Di";
		cout<<"\n\t   PEMBELIAN TIKET KERETA API ";
        cout<<endl;
        cout<<" ====================================================";
        cout<<endl;
        cout<<"\t\t  DAFTAR MENU ";
        cout<<endl;
        cout<<"\t---------------------------------"<<endl;

        cout<<"\t| 1. Pembelian Tiket\t\t|"<<endl;
        cout<<"\t| 2. Batalkan Pembelian\t\t|"<<endl;
        cout<<"\t| 3. Tampilkan Daftar Penumpang\t|"<<endl;
        cout<<"\t| 4. Cari Daftar Penumpang\t|"<<endl;
        cout<<"\t| 5. Keluar\t\t\t|"<<endl;

        cout<<"\t---------------------------------"<<endl;
        cout<<"===================================================="<<endl;
        cout<<endl;

        cout<<"Masukan Pilihan Anda (1-5) : ";
        cin>>pil;
		switch(pil){
		case 1 :
			buy();
			break;
		case 2 :
			del();
			break;
		case 3 :
			cek();
			break;
		case 4 :
			cari();
			break;
		case 5 :
			exit(0);
			break;
		default:
			cout<<"Input salah, silahkan input ulang!(press any key)";
		}	
	}while(pil != 7);
	return 0;
}
   

     