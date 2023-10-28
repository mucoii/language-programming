 /*
	Name: Ex14 Tim hieu ve ham va cach khai bao ham trong lap trinh C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 28/10/23 08:59
	Description: Bai nay chung ta se ve ham va cach khai bao ham trong lap trinh
	C/C++ khi nao su dung no mot cach hop ly
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

// Co tham so
int plus2Number(int a, int b);
int mul2Number(int a, int b);

// Khong tham so
//int add2Number(int , int );
//int nhan2So(int , int );

int main() {
	
	int x, y, z, t;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter y = ";
	cin >> y;
	z = plus2Number(x,y);
	cout << "\nSum = " << z << endl;
	t = mul2Number(x,y);
	cout << "Mul = " << t << endl;
	getch();

	return 0;
}

int plus2Number(int a, int b) {
	return a +  b;
}
int mul2Number(int a, int b) {
	return a *b;
}
