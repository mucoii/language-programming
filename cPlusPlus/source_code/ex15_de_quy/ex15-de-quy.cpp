/*
Name: Ex15 Tim hieu ve khai niem de quy trong lap trinh
Copyright: Mu Coi
Author: Mu Coi
Date: 28/10/23 09:19
Description: Bai nay chung ta se tim hieu ve khai niem de quy trong lap trinh C/C++
*/

#include <iostream>
#include <stdio.h> 
#include <conio.h>

using namespace std;

int factorial(int n);

int main() {
	int n;
	cout << "Enter number integer = ";
	cin >> n;
	cout << n << "! = " << factorial(n);
	getch();
	return 0;
}

int factorial(int n) {
	if(n == 0 || n == 1)
		return 1;
	return n*factorial(n-1);
}
