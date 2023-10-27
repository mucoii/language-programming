 /*
	Name: Tim hieu ve cau lenh goto trong lap trinh C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 27/10/23 08:38
	Description: Bai nay chung ta se tim hieu ve cau lenh goto
		mot so loi ich va han ch dung no nhu the nao trong lap trinh C/C++
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	
	int n;
	int i = 0;
	int sum = 0;
	cout << "Enter n: ";
	cin >> n;
	cal: sum += i;
	i++;
	
	if(i <= n){
		goto cal;
		
	}
	cout << "Sum 1+2+....+" << n << " la: " << sum << endl;
//	int n;
//	cout << "Enter n: ";
//	cin >> n;
//	if(n > 0) {
//		goto tt;
//		cout << "Enter subject program: " << endl;
//	}
//		
//	tt: cout << "Program C/C++";
	getch();
	return 0;
}
