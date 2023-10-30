 /*
	Name: Ex16 Tim hieu ve de quy va cach phan loai chung trong lap trinh C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 30/10/23 14:03
	Description: Bai nay chung ta se tim hieu ve de quy va cach phan loai chung 
				trong lap trinh C/C++, co ra nhieu loai de quy, trong video nay 
				chung ta se học het ve chung va cach dung chung khi nao la
				hop ly nhat.
*/


#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
long sumS(int n);
long fibolaxiF(int n);
long soHang(int n);
long calYn(int n);
long calXn(int n);

int main() {
	
	
	int n;
	cout << "Enter n: "; 
	cin >> n;
	// S(n) = S(n-1) + n --> De quy tuyen tinh
	cout << "Sum s(" << n << ") is: " << sumS(n) << endl;
	// F(n) = F(n-1) + F(n-2) --> De quy nhi phan
	cout << "Fibolaxi F(" << n << ") is: " << fibolaxiF(n) << endl;
	// X(n) = X(n) + i * i * X(n-i) --> De quy phi tuyen tinh
	cout << "So hang thu (" << n << ") is: " << soHang(n) << endl;
	// X(n) = X(n) + i * i * X(n-i) --> De quy phi tuyen tinh
	cout << "So hang thu (" << n << ") of X(n) is: " << calXn(n) << endl;
	cout << "So hang thu (" << n << ") of Y(n) is: " << calYn(n) << endl;
	getch();
	return 0;
}

long sumS(int n) {
		if(n == 0)
			return 0;
		return sumS(n-1) + n;
	}
	
long fibolaxiF(int n) {
	if(n == 0 || n == 1)
		return 1;
	return fibolaxiF(n-1) + fibolaxiF(n-2);
}

long soHang(int n) {
	if(n == 0) 
		return 1;
	long s = 0;
	for(int i = 1; i <= n; i++){
		s = s + i*i*soHang(n-i);
	}
	return s;
}

long calYn(int n) {
	
		if(n == 0)
			return 1;
		return n*n*calXn(n-1) + calYn(n-1);

}
long calXn(int n) {

		if(n == 0)
			return 1;
		return n*n*calXn(n-1) + calYn(n-1);
	
}
