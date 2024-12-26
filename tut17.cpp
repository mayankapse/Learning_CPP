#include<iostream>
using namespace std;

inline int product(int a, int b) {
    // Not recommended to use loops, switch-case, goto, static variables, recursion in inline functions
    static int c = 0; // this will execute only once
    c = c + 1; // next time this function was called, it will retain the value of c
    // return a * b;
    return a * b;
}

// Default Arguments
float moneyReceived(int currentMoney, float factor = 1.04) {
    return currentMoney * factor;
}

// Recursions & Recursive Functions
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    else if (n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Tut17 (Inline Functions, Default Arguments & Constant Arguments)

    // Inline Functions
    // inline functions are used to reduce the execution time of a program
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;

    // Default Arguments
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year" << endl;

    // Constant Arguments
    // int strlen(const char *p); // this function will not modify the value of p

    // Tut18 (Recursions & Recursive Functions)
    // Recursion is a process in which a function calls itself as a subroutine
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    // Fibonacci Series
    cout << "The fibonacci series of " << n << " is " << fibonacci(n) << endl;

    // Tut19 (Function Overloading)
    // Function Overloading
    // Function Overloading is a feature that allows us to have more than one function with the same name, but with different parameters
    // Function Overloading can be done by changing the number of arguments or changing the data type of the arguments

    return 0;
}