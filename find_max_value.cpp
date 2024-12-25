#include <iostream>

using namespace std;

int main()
{
	float a, b, c, bilterbesar;
	
	cout << "Masukkan bilangan pertama : " ;
	cin >> a;
	cout << "Masukkan bilangan kedua : " ;
	cin >> b;
	cout << "Masukkan bilangan ketiga : " ;
	cin >> c;
	
	if (a > b && a > c)
	{
		bilterbesar = a;
	}
	else if (b > a && b > c)
	{
		bilterbesar = b;
	}
	else
	{
		bilterbesar = c;
	}
	
	cout << "Bilangan terbesar adalah : " << bilterbesar;
	
	return 0;
}
