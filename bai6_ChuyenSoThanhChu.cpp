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
	else if (num == 9) { cout << "Chin\n"; }
	
	switch (num)
	{
	case 0:
		cout << "khong\n";
		break;
	case 1:
		cout << "Mot\n";
		break;
	case 2:
		cout << "hai\n";
		break;
	case 3:
		cout << "ba\n";
		break;
	case 4:
		cout << "bon\n";
		break;
	case 5:
		cout << "nam\n";
		break;
	case 6:
		cout << "sau\n";
		break;
	case 7:
		cout << "bay\n";
		break;
	case 8:
		cout << "tam\n";
		break;
	case 9:
		cout << "chin\n";
		break;
		return 0;

	}
}