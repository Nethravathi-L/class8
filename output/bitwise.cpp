#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Binary AND operator
    cout << "a & b is " << (a & b) << endl;  // 6-> 0110 & 4-> 0100// ans -> 0100 =4

    // Binary OR operator
    cout << "a | b is " << (a | b) << endl; // 6-> 0110 | 4-> 0100// ans -> 0110 =6

    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;// 6-> 0110 | 4-> 0100// ans -> 0010 =2

    // Left Shift operator
    cout << "a<<1 is " << (a << 1) << endl;// 6-> 0110 | 4-> 0100// ans -> shifting "a" left by 1  (or) move -> 0110 << 1  =1100 =12

    // Right Shift operator
    cout << "a>>1 is " << (a >> 1) << endl;// 6-> 0110 | 4-> 0100// ans -> shifting "a" right by 1 (or) move -> 0110 >> 1  =0011 =3

    // One’s Complement operator
    cout << "~(a) is " << ~(a)<< endl; //6-> 0110 // ans -> 1001 ->9
    
    cout<< endl;

 string result = (5 >0) ? "even" : "odd";
 cout << "result=" << result<< endl;
    return 0;
}
