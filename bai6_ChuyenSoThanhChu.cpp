// bai6_ChuyenSoThanhChu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "CHUONG TRINH CHUYEN SO THANH CHU\n";
	int num;
	cout << "Nhap so";
	cin >> num;
	if (num == 0) { cout << "Khong\n"; }
	else if (num == 1) { cout << "Mot\n"; }
	else if (num == 2) { cout << "Hai\n"; }
	else if (num == 3) { cout << "Ba\n"; }
	else if (num == 4) { cout << "Bon\n"; }
	else if (num == 5) { cout << "Nam\n"; }
	else if (num == 6) { cout << "Sau\n"; }
	else if (num == 7) { cout << "Bay\n"; }
	else if (num == 8) { cout << "Tam\n"; }
	else if (num == 9) { cout << "Chin\n" << endl; }
	return 0;
}