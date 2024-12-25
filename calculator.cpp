#include <iostream>
using namespace std;

int main ()
{
	float bil1, bil2, hasiltambah, hasilkurang;
	
	cout << "Masukkan bilangan pertama : ";
	cin >> bil1;
	cout << "Masukkan bilangan kedua : ";
	cin >> bil2;
	hasiltambah = bil1 + bil2;
	hasilkurang = bil1 - bil2;
	cout << "============================================================" << endl;
	cout << "Hasil Penjumlahan : ";
	cout << hasiltambah << endl;
	cout << "Hasil Pengurangan : ";
	cout << hasilkurang << endl;
	
	return 0;
	
}
