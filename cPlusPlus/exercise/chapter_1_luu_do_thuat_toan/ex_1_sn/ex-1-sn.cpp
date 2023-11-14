 /*
	Name: Ex1 Tinh S(n) = 1 + 2 + 3 + ... + n
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 14/11/23 14:21
	Description:
	Link: https://github.com/luyencode/cpp-solutions/blob/main/solutions/XG0SDxsw.cpp
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	
	int i, s, n;
	s = 0;
	
	cout << "Enter integer n = ";
	cin >> n;
	for(i = 1; i <= n; i++) {
		s += i; // s = s + i
	}
	
	cout << "Sum S(" << n << ") = " << "1 + 2 + 3 + ... + " << n << " = " << s << endl;

	getch();
	return 0;
}
