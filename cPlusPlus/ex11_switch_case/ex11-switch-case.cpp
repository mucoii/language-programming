 /*
 	Ex-11: Tim hieu ve cau truc dieu khien switch case trong C/C++
 */
 
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	
	int n;
	cout << "Enter n:";
	cin >> n;
	switch(n) {
		case 1: cout << "Sunday"; break;
		case 2: cout << "Monday"; break;
		case 3: cout << "Tuesday"; break;
		case 4: cout << "Wednesday"; break;
		case 5: cout << "Thursday"; break;
		case 6: cout << "Friday"; break;
		case 7: cout << "Saturday"; break;
		default: cout << "Khong phai thu trong tuan!"; break;
	}
	
	getch();
	return 0;
}
