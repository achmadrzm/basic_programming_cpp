#include <iostream>

using namespace std;

int main()
{
	float ipk;
	int a = 0, b = 0, c, d, opsi, pilihan, maxsks, sks, jmlhmk[5], inputmk, pernahambil[8];
	string name, loginusername, loginpassword, username[5], password[5], matakuliah [5][8];
	bool masuk;
	awal:
	masuk = false;
	c = 0, d= 0, sks = 0, maxsks = 0;
	
	cout << "1. Registrasi User\n";
	cout << "2. Login\n";
	cout << "Pilih Opsi: ";
	cin >> opsi;
	
	switch(opsi)
	{
		case 1:
			if(a<5 && b<5)
			{
				cout << "Registrasi Akun\n";
				cout << "Masukkan Username: ";
				getline (cin >> ws, name);
				username[a] = name;
				a++;
				cout << "Masukkan Password: ";
				cin >> password[b];
				b++;
				system("cls");
				goto awal;
			}
			else
			{
				system("cls");
                cout << "Jumlah user sudah penuh\n";
                goto awal;
			}
			break;
		case 2:
			cout << "Masukkan Username: ";
			getline (cin >> ws, loginusername);
			cout << "Masukkan Password: ";
			cin >> loginpassword;
			while(c<5)
			{
				if(username[c] == loginusername && password[c] == loginpassword)
				{
					masuk = true;
					goto menu;	
				}
				c++;
			}
			if(!masuk)
			{
				system("cls");
                cout << "Username atau password tidak tersedia\n";
                goto awal;
			}
			break;
		default:
			system ("cls");
			cout << "Input yang anda masukkan tidak sesuai\n";
			goto awal;
			break;
	}
	
	menu:
	cout << "\nSelamat Datang di SIAM UB" << endl;
	cout << "1. Pilih KRS" << endl;
	cout << "2. Print KRS" << endl;
	cout << "3. Logout" << endl;
	cout << "Masukkan pilihan SIAM: ";
	cin >> pilihan;
	
	switch (pilihan)
	{
		case 1:
			inputipklagi:
			cout << "Masukkan IPK: ";
			cin >> ipk;
			
			if (ipk >= 3 && ipk <= 4)
			{
				maxsks = 24;
			}
			else if (ipk >= 0 && ipk < 3)
			{
				maxsks = 20;
			}
			else
			{
				system ("cls");
				cout << "Input yang anda masukkan tidak sesuai\n";
				goto inputipklagi;
			}
			inputjmlhmklagi:
			cout << "\nSKS kamu semester ini maksimal: " << maxsks << endl;
			cout << "Mata Kuliah yang Tersedia:\n";
			cout << "1. Bahasa Indonesia (2 sks)\n";
			cout << "2. Bahasa Inggris (2 sks)\n";
			cout << "3. Rangkaian Elektronika Lanjut (4 sks)\n";
			cout << "4. Sistem Digital (3 sks)\n";
			cout << "5. Sistem Mikrokontroler (4 sks)\n";
			cout << "6. Pemrograman Dasar (3 sks)\n";
			cout << "7. Pemrograman Lanjut (4 sks)\n";
			cout << "8. Komunikasi Data (2 sks)\n\n";
			
			cout << "Ingin mengambil berapa mata kuliah? ";
			cin >> jmlhmk[c];
			
			if (jmlhmk[c] >= 1 && jmlhmk[c] <= 8)
			{
				while (jmlhmk[c] > d)
				{
					cout << "Masukkan nomor mata kuliah 1-8: ";
					cin >> inputmk;
					
					if (inputmk == 1)
					{
						sks += 2;
						if (sks > maxsks || pernahambil[0] == 1)
						{
							sks -= 2;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Bahasa Indonesia (2 sks)";
						pernahambil[0] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 2)
					{
						sks += 2;
						if (sks > maxsks || pernahambil[1] == 1)
						{
							sks -= 2;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Bahasa Inggris (2 sks)";
						pernahambil[1] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 3)
					{
						sks += 4;
						if (sks > maxsks || pernahambil[2] == 1)
						{
							sks -= 4;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Rangkaian Elektronika Lanjut (4 sks)";
						pernahambil[2] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 4)
					{
						sks += 3;
						if (sks > maxsks || pernahambil[3] == 1)
						{
							sks -= 3;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Sistem Digital (3 sks)";
						pernahambil[3] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 5)
					{
						sks += 4;
						if (sks > maxsks || pernahambil[4] == 1)
						{
							sks -= 4;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Sistem Mikrokontroler (4 sks)";
						pernahambil[4] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 6)
					{
						sks += 3;
						if (sks > maxsks || pernahambil[5] == 1)
						{
							sks -= 3;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Pemrograman Dasar (3 sks)";
						pernahambil[5] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 7)
					{
						sks += 4;
						if (sks > maxsks || pernahambil[6] == 1)
						{
							sks -= 4;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Pemrograman Lanjut (4 sks)";
						pernahambil[6] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
					else if (inputmk == 8)
					{
						sks += 2;
						if (sks > maxsks || pernahambil[7] == 1)
						{
							sks -= 2;
							cout <<"SKS melebihi batas atau terdapat mata kuliah yang sama\n";
							continue;
						}
						matakuliah[c][d] = "Komunikasi Data (2 sks)";
						pernahambil[7] = {1};
						cout << matakuliah[c][d] << endl;
						d++;
					}
				}
			}
			else
			{
				system ("cls");
				cout << "Input yang anda masukkan tidak sesuai\n";
				goto inputjmlhmklagi;
			}
			goto menu;
			break;
		case 2:
			system ("cls");
			cout << "KRS Akademik Universitas Brawijaya\n";
			cout << "Mata kuliah yang diambil pada semester ini:\n";
			for (int e = 0; e < jmlhmk[c]; e++)
			{
				cout << e+1 << ". " << matakuliah [c][e] << endl;
			}
			goto menu;
			break;
		case 3:
			system ("cls");
			goto awal;
			break;
		default:
			system ("cls");
			cout << "Input yang anda masukkan tidak sesuai\n";
			goto menu;
	}
	return 0;
}