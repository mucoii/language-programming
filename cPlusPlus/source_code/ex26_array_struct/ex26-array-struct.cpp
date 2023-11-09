 /*
	Name: Ex26 Tim hieu ve mang cau truc struct trong lap trinh C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 09/11/23 14:03
	Description: Chung ta se tim hieu ve mang cau truc struct trong lap trinh C/C++
	Link: https://www.youtube.com/watch?v=rlnLu8bwQv8&list=PLq3KxntIWWrJkDaPEVmoaYW3PcZpkCzV2&index=27
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

typedef struct diem {
	int x;
	int y;
};
typedef struct Diem{
	int x;
	int y;
};

double khcach(int x1, int y1, int x2, int y2);
void doitoado(int &x, int &y, int a, int b);

int main() {
	
//	Diem *p, a;
//	p = &a;
//	p->x = 100;
//	p->y = 120;
//	cout < a.x << endl;
//	cout << a.y;
	
	diem a, b;
	double kcach;
	cout << "\nToa do diem a: "; cout << "\nx1="; cin >> a.x;
	cout << "\ny1="; cin >> a.y;
	cout << "\nToa do diem b: "; cout << "\nx2="; cin >> b.x;
	cout << "\ny2="; cin >> b.y;
	
	// Truyen tham tri
	kcach = khcach(a.x, a.y, b.x, b.y);
	cout << kcach;
	
//	truyen tham bien
	doitoado(a.x, a.y, 10, 10);
	cout << "\nx=" << a.x;
	cout << "\ny=" << a.y;
	
	
	getch();
	return 0;
}

double khcach(int x1, int y1, int x2, int y2) {
	double kc;
	kc = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	return kc;
}
void doitoado(int &x, int &y, int a, int b) {
	x = x - a;
	y = y - b;
}
