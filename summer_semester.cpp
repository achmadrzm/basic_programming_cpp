#include <iostream>

using namespace std;

int main ()
{
	string niminput, passinput;
	string nim = "225150301111027";
	string password = "123456";
	
	login :
	cout << "Masukkan NIM : " ;
	cin  >> niminput;
	cout << "Masukkan Password : " ;
	cin >> passinput;
	
	if (niminput == nim && passinput == password) 
	{
		goto menu;
	}
	else
	{
		system ("cls");
		cout << "Maaf, NIM dan password yang anda masukkan tidak sesuai.." << endl ;
		goto login ;
	}
	
	menu :
	string matakuliah;
	int sks, pilihanmatkul, tambahmatkul, harga, biaya, uangbayar, uangkembali;
	
	system("cls");
	cout << "SELAMAT ANDA BERHASIL LOGIN!" << endl ;
	cout << "SELAMAT DATANG PADA SISTEM PENDAFTARAN SEMESTER ANTARA" << endl ;
	cout << endl;
		
	pilih :
	cout << "Pilihan mata kuliah : " << endl ;
	cout << "1. Sistem Digital" << endl ;
	cout << "2. Sistem Linier" << endl;
	cout << "3. Pemrograman Lanjut" << endl ;
	cout << "4. Matematika Komputasi" << endl ;
	cout << endl;
		
	cout << "5. Bayar" << endl ;
	cout << "6. Batal" << endl ;
	cout << "Masukkan pilihan anda : " ;
	cin >> pilihanmatkul ;
	
	switch (pilihanmatkul)
		{
			case 1 :
				sks = 4 ;
				harga = 400000;
				matakuliah = "Sistem Digital" ;
				break ;
			case 2 :
				sks = 3 ;
				harga = 300000;
				matakuliah = "Sistem Linier" ;
				break ;
			case 3 :
				sks = 4 ;
				harga = 400000;
				matakuliah = "Pemrograman Lanjut" ;
				break ;
			case 4 :
				sks = 3 ;
				harga = 300000;
				matakuliah = "Matematika Komputasi" ;
				break ;
			case 5 :
				goto bayar;
				break;
			case 6 :
				cout << "Terima kasih" ;
				goto selesai ;
				break ;
			default :
				system ("cls") ;
				cout << "Pilihan yang anda masukkan tidak tersedia..." << endl;
				goto pilih ;
				break ;
		}
		
	cout << endl;
	cout << "Mata Kuliah	: " << matakuliah << endl ;
	cout << "Jumlah SKS	: " << sks ; cout << " SKS" << endl;
	cout << "Harga		: Rp." << harga << endl;
		
	cout << endl;
	cout << "Apakah anda ingin menambahkan mata kuliah ini?" << endl;
	cout << "1. Ya." << endl ;
	cout << "2. Tidak." << endl ;
	cout << "Pilihan anda : " ;
	cin >> tambahmatkul ;
		
	switch (tambahmatkul)
	{
		case 1 :
			biaya += harga ;
			system ("cls") ;
			goto pilih ;
			break ;
		case 2 :
			system ("cls") ;
			goto pilih ;
	}		
	
	bayar :
	cout << "=====================================" << endl;
	cout << "PEMBAYARAN" << endl ;
	cout << "Total Bayar	: Rp." << biaya << endl ;
	
	if (biaya > 900000)
	{
		cout << "Maaf jumlah maksimal sks yang bisa anda ambil adalah sebanyak 9 sks" << endl;
	}
	else
	{
		cout << "Uang Bayar	: Rp." ;
		cin >> uangbayar ;
		uangkembali = uangbayar-biaya;
		
		if (biaya > uangbayar)
		{
			cout << "Uang anda tidak cukup!" ;
		}
		else 
		{
		cout << "Uang Kembali	: Rp." << uangkembali << endl;
		}
	}
	
	selesai :
		
	return 0;
}
