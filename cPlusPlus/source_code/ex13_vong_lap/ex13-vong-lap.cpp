 /*
	Name: Ex13 Tim hieu ve vong lap for while do while trong lap trinh C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 27/10/23 14:06
	Description: Bai nay chung ta se tim hieu ve vong lap for, while, 
	do while trong lap trinh C/C+ va cach phan biet chung, khi nao su dung chung cho hop ly
*/


#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
//	Tinh tong cac so nguyen tu 1 den n
/* 
for
	int i, n;
	int sum = 0;
	cout << "Enter n = ";
	cin >> n;
	
	for(i = 1; i <= n; i++) {
		sum += i;
	}
	
	cout << "Sum integer from 1 to " << n << " is " << sum << endl;
*/

/*
while
int i, n;
	int sum = 0;
	cout << "Enter n = ";
	cin >> n;
	i = 1;
	while(i <= n) {
		sum += i;
		i++;
	} 
	
	cout << "Sum integer from 1 to " << n << " is " << sum << endl;
*/
/*
do while
*/
	int i, n;
	int sum = 0;
	cout << "Enter n = ";
	cin >> n;
	i = 1;
	do {
		sum += i;
		i++;
	} while (i <= n);
	
	cout << "Sum integer from 1 to " << n << " is " << sum << endl;

	
	getch();
	return 0;
}
