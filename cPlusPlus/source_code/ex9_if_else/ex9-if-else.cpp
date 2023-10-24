/*
  Ex_9 Tim hieu ve cau truc dieu khien if else   
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int a, b, max;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    //max = b;
//    if(a > b) max = a;
//    cout << "Number max is :" << max << endl; 
     
    if(a > b) 
         cout << a << " is number max";
    else 
         cout << b << " is number max";
    getch(); 
    return 0;   
} 
