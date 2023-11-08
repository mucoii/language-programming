 /*
	Name: Ex25 Tim hieu ve kieu du lieu co cau truc struct trong C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 08/11/23 14:02
	Description: Bai nay chung ta se tim hieu ve kieu du lieu co cau truc
		trong C/C++ cach khai bao 
	Link: https://www.youtube.com/watch?v=vV2AI83lzPw&list=PLq3KxntIWWrJkDaPEVmoaYW3PcZpkCzV2&index=26
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

typedef struct toa_do_diem {
	int x;
	int y;
}; 

toa_do_diem diem;

void nhap(diem &d);
void xuat(diem d);
diem tong(diem d1, diem d2);

int main() {
	diem a, b, ab;
	cout << "Nhap toa do diem thu nhat: " << endl;
	nhap(a);
	xuat(a);
	
	cout << "Nhap toa do diem thu hai: " << endl;
	nhap(b);
	xuat(b);
	
	cout << "\n Tong toa do cua hai diem vua nhap la: ";
	ab = tong(a + b);
	xuat(ab);

	getch();
	return 0;
}

void nhap(diem &d) {
	cout << "Hoanh do: ";
	cin >> d.x;
	cout << "Tung do: ";
	cin >> d.y;
}
void xuat(diem d) {
	cout << "\nToa do diem: ("<<d.x << "," << d.y << ")";
}

diem tong(diem d1, diem d2) {
	diem temp;
	temp.x = d1.x + d2.x;
	temp.y = d1.y + d2.y;
	return temp;
}
