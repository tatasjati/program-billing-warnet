/* Billing Warnet*/
#include<iostream>

using namespace std;
int main(){
	char nama[15];
	char no[2];
	int J1,M1,D1,J2,M2,D2,Jam,Menit,Detik;
	int totJam,totMenit,totDetik;
	int totbayar;
	system("color b");
		
	cout<<"|=================================================|"<<endl;
	cout<<"|______________< Selamat Datang di >______________|"<<endl;
	cout<<"|__________________< Covid.NET >__________________|"<<endl;
	cout<<"|=================================================|"<<endl;
	cout<<" Masukan Nama Anda : "; cin>>nama;
	cout<<" No. Komputer : "; cin>>no;
	
	cout<<"==================================================="<<endl;
	cout<<" Mulai pada\n";
	cout<<" Masukan jam   : ";cin>>J1;
	cout<<" Masukan menit : ";cin>>M1;
	cout<<" Masukan detik : ";cin>>D1;
	
	cout<<"\n Selesai pada\n";
	cout<<" Masukan jam   : ";cin>>J2;
	cout<<" Masukan menit : ";cin>>M2;
	cout<<" Masukan detik : ";cin>>D2;
	
	cout<<"\n Lama pemakaian : ";
	Jam = (J2-J1);
	Menit = (M2-M1);
	Detik = (D2-D1);
	cout<<Jam;cout<<" jam, ";
	cout<<Menit;cout<<" menit, ";
	cout<<Detik;cout<<" detik";
	
	totJam=Jam*5000;
	totMenit=Menit*83.33;
	totDetik=Detik*1.388;
	cout<<"\n Tarif Rp. 5000,/jam\n";
	cout<<" Total Yang Harus Dibayar : Rp. ";
	totbayar=totJam+totMenit+totDetik;
	cout<<totbayar<<endl<<endl;
	cout<<"|=================================================|"<<endl;
	cout<<"|____________________Covid.NET____________________|"<<endl;
	cout<<"|=================< Terima Kasih >================|"<<endl;
	cout<<"|=========< KU TUNGGU KEDATANGANMU LAGI >=========|"<<endl;
	cout<<"|_________________________________________________|\n"<<endl;
	
	cout<<" By. Tatas Jati Wikanta / NIM : 20051397065\n";
	return 0;
}

