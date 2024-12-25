#include <iostream>

using namespace std;

int panjang (string input)
{
    return input.length();
}

bool kondisi(string parameter, int max)
{
    if (panjang(parameter) <= max)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    int maxnama = 18, maxnim = 15, maxmatkul = 50;
    string nama, nim, matkul;
    
    cout << "Nama           : ";
    getline (cin, nama);        
    cout << "NIM            : ";
    if (kondisi(nama, maxnama))
    {
        cin >> nim;
    }
    cout << "Mata Kuliah    : ";
    if (kondisi(nama, maxnama) && kondisi(nim, maxnim))
    {
        cin.ignore();
        getline(cin, matkul);
    }

    cout << "\nBanyak karakter nama adalah : ";
    if (kondisi(nama, maxnama))
    {
        cout << panjang(nama) << endl;
    }
    else
    {
        cout << maxnama << endl;
    }
    cout << "Banyak karakter NIM adalah : ";
    if (kondisi(nim, maxnim))
    {
        cout << panjang(nim) << endl;
    }
    else
    {
        cout << maxnim << endl;
    }
    cout << "Banyak karakter Mata Kuliah adalah : ";
    if (kondisi(matkul, maxmatkul))
    {
        cout << panjang(matkul) << endl;
    }
    else
    {
        cout << maxmatkul << endl;
    }
    return 0;
}