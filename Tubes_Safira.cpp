//TUGAS BESAR ALGORITMA DAN PEMROGRAMAN- SISTEM INFORMASI PENJUALAN TOKO
/*-Selection/Seleksi
  -Repetation/Pengulangan
  -Array
  -Function
  -String/File
  -Selection Sort(Descending)
*/
/*
    Nama      : Safira Anjani
    Npm       : 4520210002
    Date      : 16 Desember 2020
    NO. Tugas : 29
*/
#include <iostream>
#include <windows.h> 
#include <iomanip>
using namespace std;

void strcat();
const char *ttl = "12 Desember 2012";
const char *id = "A2157684", *tgl = "12 Desember 2020";
const int barang = 4, n = 3;
int SafI,i,j,k,x,m,Saf1=2,Saf2=1,Fira[n]={1,2,3};
char Y,y,T,t,Saf3='Y';
int brg1=675000, brg2=925000, brg3=625000, brg5=70000,harga,harga2,total,total2;
char nama[50] = "Safira Anjani";
string keranjang[barang]={"Greetings Seasson Album", "Album Set", "Official Light Stick", "Photocard"};

//Function
void diskon()
{
	//Selection(If Else)
	if (harga<700000)
		cout <<"0" <<endl;
	else
		cout <<"20%" <<endl;
}
//Function
void cetak()
{
	//Dengan Sort(Descending)
	k=0;
	while (k<=n-2){
	j=k;
	i=k+1;
		while (i<=n-1){
			if (Fira[i] > Fira[j])
				j=i;
			i++;}
		cout << endl;
		x = Fira[j];
		Fira[j] = Fira[k];
		Fira[k] = x;
		k++;}
	
		cout << " Mencetak Struk Belanja Anda Dalam "<<endl;
		for(i=0; i<=n-1; i++)
		cout << setw(2) << Fira[i] << "...";
}
//Function
void akhir()
{
			//Sequence
			cout << "          ^^SPECIAL GIFT FOR YOU^^ " << endl;
			cout << " 		    - - -	  " << endl;
			cout << "		    | | |	  " << endl;
			cout << "		    V V V	  " << endl;
			Sleep(1500);
			cout << "        -        -        -        -       " << endl;
			cout << "      (. .)    (^ ^)    (+ +)    (~ ~)     " << endl;
			cout << "      ( o )    ( - )    ( o )    ( x )     " << endl;
			cout << "        =        =        =        =       " << endl;
			cout << "        (        )        (        )       " << endl;
			cout << "        ~)~    ~(~        ~)~    ~(~       " << endl;
			cout << "        (        )        (        )       " << endl;
			cout << endl;
			Sleep(1500);
			cout << endl;
			cout << "               !PICK THE ONE!              " << endl;
			cout << endl;
			Sleep(1500);
			cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;
			cout << " TERIMAKASIH TELAH BERBELANJA DI TOKO KAMI " << endl;
			cout << "      ~SEMOGA HARI ANDA MENYENANGKAN~      " << endl;
			cout << " ----------------------------------------- " << endl;
}	
//Function
void daftarbrg()
{
		//Sequence
		cout << endl;
		cout << " ============================================ " << endl;
		cout << "|     Daftar Harga Barang Almond.KStuff      |" << endl;
		cout << " -------------------------------------------- " << endl;
		cout << "|           Barang          " << "|" << "      Harga     |" << endl;
		cout << " -------------------------------------------- " << endl;
		cout << "| 1.Greetings Seasson Album " << "|" << " Rp. 675.000    |" << endl;
		cout << "| 2.Album Set               " << "|" << " Rp. 925.000    |" << endl;
		cout << "| 3.Official Light Stick    " << "|" << " Rp. 625.000    |" << endl;
		cout << "| 4.Sweater                 " << "|" << " Rp. 210.000    |" << endl;
		cout << "| 5.Photocard               " << "|" << " Rp. 70.000     |" << endl;
		cout << "| 6.Student ID Card         " << "|" << " Rp. 60.000     |" << endl;
		cout << "| 7.Hoodie                  " << "|" << " Rp. 275.000    |" << endl;
		cout << "| 8.Ball Cap                " << "|" << " Rp. 80.000     |" << endl;
		cout << "| 9.Diary Books             " << "|" << " Rp. 120.000    |" << endl;
		cout << "| 10.Muffler                " << "|" << " Rp. 325.000    |" << endl;
		cout << "| 11.Poster                 " << "|" << " Rp. 90.000     |" << endl;
		cout << "| 12.Shopper Bag            " << "|" << " Rp. 150.000    |" << endl;
		cout << " ============================================ " << endl;
		cout << endl;
		Sleep(2500);
		//Array
		cout << endl;
		cout << " ========================================== " << endl;
		cout << "|    Daftar Barang Yang Ingin Anda Beli    |" << endl;
		cout << " ------------------------------------------ " << endl;
		//Repetation(For)
		for(int SafI=0; SafI<=3; SafI++){
			cout << " " << SafI+1 << "." <<  " " << keranjang[SafI] << endl;
		}
		cout << " ------------------------------------------ " << endl;
		Sleep(1500);
		cout <<" JUMLAH BARANG YANG DIBELI : " << barang << " buah";
		cout << endl;
		cout << endl;
}
//Function
void membership()
{
		cout << endl;
		cout << " 		Gunakan Kartu " << endl;
		cout << " 		    - - -	  " << endl;
		cout << "		    | | |	  " << endl;
		cout << "		    V V V	  " << endl;
		cout << endl;
		Sleep(2000);
		cout << "     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << "    +   --ALMOND.KSTUFF MEMBERSHIP--    +" <<endl;
		cout << "     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << "    +            " << nama << "          +" << endl;
		cout << "    +	            " << id << "            +" << endl;
		cout << "    +           Exp. 12 12 2021         +" << endl;
		cout << "    + Do What You Love,Love What You Do +" << endl;
		cout << "     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << endl;
		cout << "Selamat!! Anda Mendapatkan Diskon Sebesar 20%" << endl;
		cout << "       Dengan Minimal Belanja Rp.700000      " << endl;
		cout << "            ~Selamat Berbelanja~             " << endl;
		cout <<endl;
		Sleep(2000);
}
//Function
void cetak3()
{
				//Sequence
				cout << " ========================================== " << endl;
				Sleep(1500);
				cout << "|    -->BUKTI PEMBAYARAN ALMOND.KSTUFF<--  |" << endl;
				Sleep(1500);
				cout << " ========================================== " << endl;
				Sleep(1500);
				cout << "    Nama	        : " << nama << "              " <<endl;
				Sleep(1500);
				cout << "    ID Membership       : " << id  << "               " <<endl;
				Sleep(1500);
				cout << "    Tanggal Pemesanan   : " << tgl  << "               " <<endl;
				Sleep(1500);
				cout << " ========================================== " << endl;
				Sleep(1500);
				cout << "|   No.   |         Nama Barang	           |" << endl;
				Sleep(1500);
				cout << " ========================================== " << endl;
				Sleep(1500);
}
//Function
void cetak1()
{
			//Selection(If Else)
			harga=brg1+brg2+brg3+brg5;
			if(harga>700000)
				total=harga-(harga*20/100);
			else
				total=harga;
			//Sequence
			cout << endl;
			Sleep(2500);
			cetak();
			cout << endl;
			cout << endl;
			cout << endl;
			Sleep(2000);
			cetak3();
			//Repetation(For)
			for(int SafI=0; SafI<=3; SafI++)
			{
			cout << setw(5) << " " << SafI+1 << "." << "	 	" << keranjang[SafI] << endl;
			}
			Sleep(1500);
			cout << " ========================================== " << endl;
			cout << "      Jumlah Pembayaran : Rp." << harga << endl;
			cout << "      Potongan Harga	: "; diskon();
			cout << "      Total	        : Rp." << total << endl; 
			cout << " ========================================== " << endl;
			cout << endl;
			cout << endl;
			Sleep(2500);
}
//Function
void cetak2()
{
				harga2=brg1+brg2+brg3+brg5;
				total2=harga2;
				//Sequence
				cout << endl;
				Sleep(2500);
				cetak();
				cout << endl;
				cout << endl;
				cout << endl;
				Sleep(2000);
				cetak3();
				//Repetation(For)
				for(int SafI=0; SafI<=3; SafI++)
				{
				cout << setw(5) << " " << SafI+1 << "." << "	 	" << keranjang[SafI] << endl;
				}
				Sleep(1500);
				cout << " ========================================== " << endl;
				cout << "      Jumlah Pembayaran : Rp." << harga2 << endl;
				cout << "      Potongan Harga	: Rp.0" << endl;
				cout << "      Total	        : Rp." << total2 << endl; 
				cout << " ========================================== " << endl;
				cout << endl;
				cout << endl;
				Sleep(2500);
}

int main()
{
//Function
	cout << endl;
	cout << endl;
	cout << " 	>>>---> ALMOND.KSTUFF <---<<< " << endl;
	Sleep(1500);
	cout << "	       -+SPECIAL SALE+-" << endl;
	Sleep(1500);
	cout << " 	-+AT ENDLESS OF THIS YEAR+-" << endl;
	Sleep(1500);
	cout << endl;
	//String
	char Safira1[50] = "The Store For ";
	char Safira2[50] = "Official Albums and Merch KPOP";
	cout << endl;
	cout << " ========================================== " << endl;
	cout << "| >>----> WELCOME TO ALMOND.KSTUFF <----<< |" << endl;
	cout << " ========================================== " << endl;
	strcat(Safira1,Safira2);
	cout << Safira1 << endl;
	cout << endl;
	cout << endl;
	cout << "[#]Masukkan Nama Anda : " << nama << endl;
	Sleep(1500);
	cout << endl;
	cout << " Hai "<< nama <<", Sudah Punya Membercard?" << endl;
	cout << " 1.Sudah" << endl;
	cout << " 2.Belum" << endl;
	Sleep(1500);
	cout << " = " << Saf1 << endl;
	cout << endl;
	//Selection(Switch)
	switch(Saf1){
	case 1:
			membership();
			//Repetation(Do While)
			do{
			daftarbrg();
			Sleep(2500);
			cout << "[#]Apakah Anda Yakin Untuk membeli Ini ? (Y/T) : "<< Saf3;
			cout << endl;
			Sleep(1500);
			}while(Saf3=='t'||Saf3=='T');
			if(Saf3=='y'||Saf3=='Y'){
				cetak1();	
				akhir();
				cout << endl;
				}
			break;
	
	case 2:
				cout << "[#]Ingin Mendaftar ?" << endl;
				cout << " 1.Daftar" << endl;
				cout << " 2.Lewati" << endl;
				Sleep(1500);
				cout << " = " << Saf2 << endl;
				cout << endl;
				Sleep(1500);
				//Selection(If Else)
				if(Saf2==1){
					cout << "[#]Masukkan Nama Anda : " << nama << endl;
					Sleep(1500);
					cout << "[#]Masukan TTL Anda : " << ttl << endl;
					Sleep(1500);
					membership();
						do{
						daftarbrg();
						Sleep(2500);
						cout << "[#]Apakah Anda Yakin Untuk Membeli Ini ? (Y/T) : "<< Saf3;
						Sleep(1500);
						}while(Saf3=='t'||Saf3=='T');
						if(Saf3=='y'||Saf3=='Y'){
							cetak1();
							akhir();
							cout << endl;
						}	
				}
				else 
					if(Saf2==2){
						cout << " Maaf Anda Tidak Mendapat Diskon Sebesar 20%" << endl;
						cout << endl;
						Sleep(1500);
						do{
						daftarbrg();
						Sleep(2500);
						cout << "[#]Apakah Anda Yakin Untuk membeli Ini ? (Y/T) : "<< Saf3;
						Sleep(1500);
						}while(Saf3=='t'||Saf3=='T');
						if(Saf3=='y'||Saf3=='Y'){
							cetak2();
							akhir();
							cout << endl;
						}
					}
			break;
	default :
			cout << " " << endl;
	return 0;
	}
cin.get();
}
