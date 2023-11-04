 /*
	Name: Tim hieu ve thao tac tren con tro trong lap trinh C/C++
	Copyright: Mu Coi
	Author: Mu Coi
	Date: 04/11/23 15:38
	Description: Bai nay chung ta se tim hieu ve cac thao tac tren cong
	tro trong lap trinh C/C++ khi nao dung chung cach tao chung
	Link: https://www.youtube.com/watch?v=9dlNYRaFun4&list=PLq3KxntIWWrJkDaPEVmoaYW3PcZpkCzV2&index=23
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	int test = 10;
	int *aP, *bP;
	aP = &test;
	bP = aP;
	
	aP = aP + 4;
	bP = bP + 1;
	*aP++;
	*(bP++);
	
	cout << "Address point aP value test: " << aP << endl;
	cout << "Address point bP value test: " << bP << endl;
	cout << "Value point aP value test: " << *aP << endl;
	cout << "Value point bP value test: " << *bP << endl;
	
	getch();
	return 0;
}
