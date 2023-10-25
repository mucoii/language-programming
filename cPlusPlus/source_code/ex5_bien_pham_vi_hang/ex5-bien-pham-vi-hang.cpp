/*
  Ex_5 Bien pham vi hang
   
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

//  Bien toan cuc
    int a, b;
    
    // Hang so
    const float PI = 3.14;
    
// bien cuc bo
   int sum(int c, int d) {
       int resuilt = c + d;
       return resuilt;
       }
       
int main() {
    
    int resuilt = sum(4,5);
     cout << "PI = " << PI << endl;
      cout << "Ket qua = " << resuilt << endl;
 
    getch();
    return 0;
        } 
