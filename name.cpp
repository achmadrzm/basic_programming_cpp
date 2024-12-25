#include <iostream>

using namespace std;

int main ()
{
	// Huruf A
	for (int a = 1; a <= 10; a++)
	{
		if (a == 2 || a == 6 || a == 7)
		{
			for (int a1 = 1; a1 <= 9; a1++)
			{
				cout << "A";
			}
		}
		else if (a == 1)
		{
			for (int a2 = 1; a2 <= 9; a2++)
			{
				if (a2 == 1 || a2 == 9)
				{
					cout << " ";
					continue;
				}
				cout << "A";
			}
		}
		else if (a == 3 || a == 4 || a == 5 || a == 8 || a == 9 || a == 10)
		{
			for (int a3 = 1; a3 <= 9; a3++)
			{
				if (a3 == 3 || a3 == 4 || a3 == 5 || a3 == 6 || a3 == 7)
				{
					cout << " ";	
					continue;
				}
				cout << "A";
			}
		}
		cout << endl;
	}
	cout << endl;
	
	// Huruf C
	for (int c = 1; c <= 10; c++)
	{
		if (c == 2 || c == 9)
		{
			for (int c1 = 1; c1 <= 9; c1++)
			{
				cout << "C";
			}
		}
		else if (c == 1 || c == 10)
		{
			for (int c2 = 1; c2 <= 9; c2++)
			{
				if (c2 == 1)
				{
					cout << " ";
					continue;
				}
				cout << "C";
			}
		}
		else if (c == 3 || c == 4 || c == 5 || c == 6 || c == 7|| c == 8 )
		{
			for (int c3 = 1; c3 <= 9; c3++)
			{
				if (c3 == 1 || c3 == 2)
				{
					cout << "C";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		cout << endl;
	}
	cout << endl;
	
	// Huruf H
	for (int h = 1; h <= 10; h++)
	{
		if (h == 5 || h == 6)
		{
			for (int h1 = 1; h1 <= 9; h1++)
			{
				cout << "H";
			}
		}
		else
		{
			for (int h2 = 1; h2 <= 9; h2++)
			{
				if (h2 == 1 || h2 == 2 || h2 == 8 || h2 == 9)
				{
					cout << "H";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		cout << endl;
	}
	cout << endl;
	
	
	// Huruf M
	for (int m = 1; m <= 10; m++)
	{
		if (m == 5 || m == 6 || m == 7 || m == 8 || m == 9 || m == 10)
		{
			for (int m1 = 1; m1 <= 9; m1++)
			{
				if (m1 == 1 || m1 == 2 || m1 == 8 || m1 == 9)
				{
					cout << "M";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		else if(m == 1)
		{
			for (int m2 = 1; m2 <= 9; m2++)
			{
				if (m2 == 1 || m2 == 2 ||m2 == 3 || m2 == 7|| m2 == 8 || m2 == 9)
				{
					cout << "M";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		else if(m == 2)
		{
			for (int m3 = 1; m3 <= 9; m3++)
			{
				if (m3 == 5)
				{
					cout << " ";
					continue;
				}
				else
				{
					cout << "M";
				}
			}
		}
		else if(m == 3)
		{
			for (int m4 = 1; m4 <= 9; m4++)
			{
				if (m4 == 3 || m4 == 7)
				{
					cout << " ";
					continue;
				}
				else
				{
					cout << "M";
				}
			}
		}
		else if(m == 4)
		{
			for (int m5 = 1; m5 <= 9; m5++)
			{
				if (m5 == 3 || m5 == 4 || m5 == 6 || m5 == 7)
				{
					cout << " ";
					continue;
				}
				else
				{
					cout << "M";
				}
			}
		}
		cout << endl;
	}
	cout << endl;
	
	// Huruf D
	for (int d = 1; d <= 10; d++)
	{
		if (d == 1 || d == 10)
		{
			for (int d1 = 1; d1 <= 9; d1++)
			{
				if (d1 == 8 || d1 == 9)
				{
					cout << " ";
					continue;
				}
				else
				{
					cout << "D";
				}
			}
		}
		else if (d == 2 || d == 9)
		{
			for (int d2 = 1; d2 <= 9; d2++)
			{
				if (d2 == 9)
				{
					cout << " ";
					continue;
				}
				else
				{
					cout << "D";
				}
			}
		}
		else if (d == 3 || d == 8)
		{
			for (int d3 = 1; d3 <= 9; d3++)
			{
				if (d3 == 1 || d3 == 2 || d3 == 7 || d3 == 8)
				{
					cout << "D";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		else if (d == 4 || d == 7)
		{
			for (int d4 = 1; d4 <= 9; d4++)
			{
				if (d4 == 1 || d4 == 2 || d4 == 8 || d4 == 9)
				{
					cout << "D";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		else if (d == 5 || d == 6)
		{
			for (int d5 = 1; d5 <= 9; d5++)
			{
				if (d5 == 1 || d5 == 2 || d5 == 9)
				{
					cout << "D";
				}
				else
				{
					cout << " ";
					continue;
				}
			}
		}
		cout << endl;	
	}

	return 0;
}
