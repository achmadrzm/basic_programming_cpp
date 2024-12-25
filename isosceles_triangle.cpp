#include <iostream>

using namespace std;

int main ()
{
	int n, a, b, c;
	
	cout << "Masukkan nilai n = ";
	cin >> n;
	
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n-a; b++)
		{
			cout << " ";
		}
		for (c = 1; c <= a; c++)
		{
			cout << "* ";	
		}
	cout << endl;
	}
	
	return 0;
}
