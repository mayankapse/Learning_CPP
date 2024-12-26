#include<iostream>
// #include "tut1.cpp" // this line will produce error message, if the file is not present in the same directory

using namespace std;

int glo = 0;    // global variable
void sum() {
    cout<<glo<<endl;
    int sum1=1,sum2=2;
    cout<<"This is tut "<<sum1<<" & "<<sum2<<endl;
}

int main() {
    sum();
    int glo = 4;
    cout << "Hello World!\n"<<"This is tut "<<glo<<endl;

    // ************************************************************************************************
    // tut5 (basic i/o streams)
    int num1, num2;
    cout << "num1 = ";          // << is called insertion operator
    cin >> num1;                // >> is called extraction operator
    cout << "num2 = ";
    cin >> num2;
    cout << "Sum = " << num1 + num2 << endl;

// ************************************************************************************************
// tut6 (header files and operators)
// 1.system header files - comes with compiler (ex. iostream)
// 2.user defined header files - written by programmer (ex. tut6.cpp)
cout << "Types of operators in c++" << endl;
// Arithmetic operators
cout << "\nArithmetic operators:" << endl;
int a = 4, b = 5;
cout << "a+b = " << a + b << endl;
cout << "a-b = " << a - b << endl;
cout << "a*b = " << a * b << endl;
cout << "a/b = " << a / b << endl;
cout << "a%b = " << a % b << endl;
cout << "b++ = " << b++ << endl; // a++ = print(a) then add 1 to it
cout << "b-- = " << b-- << endl; // a-- = print(a) then subtract 1 from it
cout << "++b = " << ++b << endl; // ++a = add 1 to a and then print it
cout << "--b = " << --b << endl; // --a = subtract 1 from a and then print it

// Assignment operators
cout << "\nAssignment operators:" << endl;
int c = 3;
a += c; // a = a+c
cout << "a+=c = " << a << endl;
a -= c; // a = a-c
cout << "a-=c = " << a << endl;
a *= c; // a = a*c
cout << "a*=c = " << a << endl;
a /= c; // a = a/c
cout << "a/=c = " << a << endl;
a %= c; // a = a%c
cout << "a%=c = " << a << endl;

// Comparison operators
cout << "\nComparison operators:" << endl;
cout << "a==b = " << (a == b) << endl;
cout << "a!=b = " << (a != b) << endl;
cout << "a>b = " << (a > b) << endl;
cout << "a<b = " << (a < b) << endl;
cout << "a>=b = " << (a >= b) << endl;
cout << "a<=b = " << (a <= b) << endl;

// Logical operators
cout << "\nLogical operators:" << endl;
cout << "(a==b) && (a<b) = " << ((a == b) && (a < b)) << endl;
cout << "(a==b) || (a<b) = " << ((a == b) || (a < b)) << endl;
cout << "!(a==b) = " << !(a == b) << endl;

// Bitwise operators
cout << "\nBitwise operators:" << endl;
cout << "a&b = " << (a & b) << endl;
cout << "a|b = " << (a | b) << endl;
cout << "a^b = " << (a ^ b) << endl;
cout << "~a = " << (~a) << endl;
cout << "a<<1 = " << (a << 1) << endl;
cout << "a>>1 = " << (a >> 1) << endl;

// ternary operator
cout << "\nTernary operator:" << endl;
int x = 10, y = 20;
int z = (x > y) ? x : y;
cout << "z = " << z << endl;

return 0;
}