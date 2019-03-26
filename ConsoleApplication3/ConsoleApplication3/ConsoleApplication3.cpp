// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<string>
#include<vector>
#include<stdio.h>
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;

//fsdfsdfsdf
struct Kieu4
{
	string Dangso;
	string Sot1;
	string pheptinh;
	string Sot2;
};

struct Kieu3
{
	string Dangso;
	string DangCanChuyenHoacToanTu;
	string Dulieu;
};
void Doc() //lay du lieu tu file
{
	std::ifstream fi;
	fi.open("input.txt", std::ios::in);
	while (!fi.eof())
	{
		Kieu4 a;
		Kieu3 b;
		std::string tmp;
		std::getline(fi, tmp);
		int k = 0;
		for (int j = 0; j < tmp.length(); j++)
		{
			if (tmp[j] == ' ')
			{
				k++;
			}
		}
		if (k == 3)
		{
			int h = 0;
			while (tmp[h] != ' ') h++;
			a.Dangso = tmp.substr(0, h);
			int k = h + 1;
			while (tmp[k] != ' ') k++;
			a.Sot1 = tmp.substr(h + 1, k - h - 1);
			int l = k + 1;
			while (tmp[l] != ' ') l++;
			a.pheptinh = tmp.substr(k + 1, l - k - 1);
			a.Sot2 = tmp.substr(l + 1, tmp.length() - l - 1);
			if(a.pheptinh=="+")
			{
				
			}
		}
		if (k == 2)
		{
			int u = 0;
			while (tmp[u] != ' ') u++;
			b.Dangso = tmp.substr(0, u);
			int p = u + 1;
			while (tmp[p] != ' ') p++;
			b.DangCanChuyenHoacToanTu = tmp.substr(u + 1, p - u - 1);
			b.Dulieu = tmp.substr(p + 1, tmp.length() - p - 1);
			cout << b.Dangso << " " << b.DangCanChuyenHoacToanTu << " " << b.Dulieu << endl;
		}
	}

}

int main()
{
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
