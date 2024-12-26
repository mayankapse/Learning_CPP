#include<iostream>
using namespace std;

typedef struct employee {
    int eId; // 4 bytes
    char gender; // 1 byte
    float salary; // 4 bytes
} stemp; // struct uses 9 bytes

union student {
    int randomnum; // 4 bytes
    float ranum; // 4 bytes
    double rnum; // 8 bytes
}; // union uses highest bytes(8bytes) among all bytes (allowing only one value to be stored at a time)

// Tut15
int sum(int a, int b); // function prototype gives assurance that the function is defined later in the code
void greet();          // void function neither takes any arguments nor returns any value (void greet(void); --> acceptable)

// Tut16
void swap(int &a, int &b); // call by reference function

int main() {
    // Tut14 (Structures, Unions, Enumerations)
    //structure is used to store multiple values at a time
    stemp mayank;
    struct employee nikhil;
    mayank.eId = 1;
    mayank.gender = 'M';
    mayank.salary = 1000000;
    cout<<"The value of eId is "<<mayank.eId<<endl;
    cout<<"The value of gender is "<<mayank.gender<<endl;
    cout<<"The value of salary is "<<mayank.salary<<endl;
    //union is used to store only one value at a time
    union student s1;
    s1.randomnum = 45;
    s1.ranum = 45.45;
    cout << "The value of randomnum is " << s1.randomnum << endl; // this will give garbage value
    cout << "The value of ranum is " << s1.ranum << endl; // union function will give the last value stored
    //enum is used to assign names to the integral constants which makes a program easy to read and maintain
    enum meal {breakfast, lunch, dinner };  // breakfast = 0, lunch = 1, dinner = 2
    meal m1 = lunch;
    cout << "enum of lunch: " << m1 << endl; // this will give 1

    // Tut15 (Function and Function Prototypes)
    int num1, num2;
    cout<<"Num 1: ";
    cin>>num1;
    cout<<"Num 2: ";
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    greet();

    // Tut16 (Call by Value & Call by Reference)
    int x = 3, y = 4;
    cout<<"X is "<<x<<" and Y is "<<y<<endl;
    swap(x, y);
    cout << "X is " << x << " and Y is " << y << endl;

    return 0;
}

// Tut15
int sum(int a, int b) {
    return a + b;
}
void greet() {
    cout<<"Void function is called."<<endl;
}

// Tut16
// passing the address of the variable is required to change the value of the variable from the actual memory location
void swap(int &a, int &b) { 
    int temp = a;
    a = b;
    b = temp;
    cout<<"The value of x is "<<a<<" and the value of y is "<<b<<endl;
}