 /*
	Name: S(n) = 1 + 1/2 + 1/3 + ... + 1/n
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 16/11/23 14:23
	Description:
	Link: https://github.com/luyencode/cpp-solutions/blob/main/solutions/TufNYnks.cpp
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	
	int i = 1;
	float s = 0;
	int n;
	
	
	
	do {
		
		cout << "Enter n = ";
		cin >> n;
		
		if(n < 1) {
			cout << "Enter n <= 1.Retyping Please!" << endl;
		}
	} while(n < 1);
	
	
	while(i <= n){
		s += (float)1/i;
		i++;
	}
	
	cout << "S(" << n << ") = 1 + 1/2 + 1/3 +... + 1/" << n << " = " << s;

	getch();
	return 0;
}
