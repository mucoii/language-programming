 /*
   Ex_10 If else long nhau  
 */
 
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    
    //int a, b, c;
//    cout << "Enter a:";
//    cin >> a;
//    cout << "Enter b:";
//    cin >> b;
//    cout << "Enter c:";
//    cin >> c;
//    
//    if(a > b && a > c) 
//         cout << a << " is number max";
//             else if (b > a && c > a)
//                  cout << b << " is number max";
//                      else 
//                           cout << c << " is number max";
                           
      float gpa;
      cout << "Enter gpa of student:";
      cin >> gpa;
      
      if( gpa <= 10 && gpa >= 9)
          cout << gpa << " Excellent";
               else if(gpa <9 && gpa >= 8)
                    cout << gpa << " Very good";
                         else if (gpa >= 7 && gpa < 8)
                              cout << gpa << " Good";
                                   else if (gpa >= 5 && gpa < 7)
                                        cout << gpa << " Average";
                                             else 
                                                  cout << gpa << " Poor";
                         
    
    getch();
    return 0;   
}
