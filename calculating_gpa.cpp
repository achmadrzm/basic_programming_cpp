#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string nama, nim;
	int sks;
	float ips1, ips2, ips3, ipk;
	
	cout << "Masukan nama anda : ";
	getline (cin, nama);
	cout << "Masukan NIM anda : ";
	cin >> nim;
	cout << "Masukan IP semester 1 : ";
	cin >> ips1;
	cout << "Masukan IP semester 2 : ";
	cin >> ips2;
	cout << "Masukan IP semester 3 : ";
	cin >> ips3;
	
	ipk = (ips1+ips2+ips3)/3;
	
	cout << "============================================================" << endl;
	cout << "Nama		: ";
	cout << nama << endl;
	cout << "NIM		: ";
	cout << nim << endl;
	cout << "IPK kamu adalah	: ";
	cout << fixed;
	cout << setprecision(2) << ipk << endl;
	
	if (ips1 <0 || ips1 >4 || ips2 <0 || ips2 >4 || ips3 <0 || ips3 >4)
	{
		cout << "Input yang anda masukan tidak sesuai";
	}
	else if (ips3 >=0 && ips3 <2)
	{
		cout << "Semester berikutnya kamu dapat mengambil sks maksimal 19 sks";
	}
	else if (ips3 >=2 && ips3 <3)
	{
		cout << "Semester berikutnya kamu dapat mengambil sks maksimal 20 sks";
	}
	else if (ips3 >=3 && ips3 <=4)
	{
		cout << "Semester berikutnya kamu dapat mengambil sks maksimal 24 sks";
	}
	
	return 0;
}
