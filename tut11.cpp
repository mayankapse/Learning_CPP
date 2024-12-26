#include<iostream>
using namespace std;

int main() {
    // Tut12 (Pointers)
    // Pointer is a data typer which holds the address of other data types
    int a = 3;
    int *b = &a; // *b is a pointer which holds the address of a
    
    // &(adress of) a(operator)
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // *(value at) b(pointer) derefrence operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to Pointer (pointer storing pointer address)
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    //Tut13 (Arrays and Pointers in Arithmetics)
    // Array is a collection of similar data types
    // Array is a pointer which points to the 1st element of the array
    int marks[] = {23, 45, 56, 89};
    cout<<"The value at marks[0] is "<<*marks<<endl;
    cout<<"The address of marks[0](23) is "<<&marks[0]<<endl;
    cout<<"The address of marks[0] is "<<marks<<endl;
    cout<<"The address of marks[1] is "<<marks+1<<endl;
    cout<<"The value at marks[1] is "<<*(marks+1)<<endl;

    int mathmarks[3];
    mathmarks[0] = 227;
    mathmarks[1] = 237;
    mathmarks[2] = 257;
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;

    return 0;
}