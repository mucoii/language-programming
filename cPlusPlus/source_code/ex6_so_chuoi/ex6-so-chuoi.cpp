 /*
   Ex_6: hang so chuoi  
 */
 
#include <iostream>
#include <stdio.h>
#include <conio.h>

#define MAX 10
#define NEW_LINE '\n'
#define PI 3.14
const int MIN = 5;
const char k_new_line   = '\n';
const int R = 5;


using namespace std;


// integer
// Decimal 212 30u 30l 40ul (khong co gi)
// Octal 0x5u (0x..lu)
// Hexadecimal 0XAFL (0X...LU)
// Float
// Decimal
// 3.14 314E-5L 

// charater
// 'x' '\t' '\u02c0'
// string
// "abc" 
int main() {
    
    cout << "Hello\tWorld\n"; // Hello World
    cout << "Hello\\World\n"; // Hello\World
    cout << "\'Hello World\'\n"; //'Hello World'
    cout << "\"Hello World\"\n"; // "Hello World"
    cout << "\?Hello World\?\n"; // ?Hello World?
    
    int sum; 
    sum = MAX + MIN;
    float S;
    S = PI * R * R;
    cout << sum;
    cout << k_new_line;
    cout << NEW_LINE;
    cout << S;
    
    getch();
    return 0;   
} 
