/*
  Ex3: Bieu thuc va ep kieu 

*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main() {
//  Ex_1: bieu thuc 
    cout <<"Ex_1: Bieu thuc"; 
    cout << 3*5 + 17/9 -8%7;
//          15  + 1    - 1
//          15
    cout <<"\n";
    cout << 3*(5+17)/9 -8%7;
//          3*22/9     -1
//          7          -1
//          6
   cout <<"\n";
   cout <<"------------------------------------------";
   cout <<"\n";
// Ex_2: Ep kieu
   cout <<"Ex_2: Ep kieu";
   cout <<"\n";
   cout << (float)25/6;
   cout <<"\n"; 
   cout << 25/(float)7;
   cout <<"\n";
   cout << (float)25/(float)9;

   getch();    
    return 0;   
}
