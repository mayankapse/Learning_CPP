#include<iostream>
#include<string>
using namespace std;

class Employee {private: int a, b, c;
    public:int d, e;
    void setData(int a, int b, int c); //Declaration
    void getData() {
        cout<<"A:"<<a<<" B:"<<b<<" C:"<<c<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1) { // :: scope resolution operator is used to define a function outside the class
    a = a1;
    b = b1;
    c = c1;
}

void chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

int main() {
    Employee harry;
    // harry.a = 134; //This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1, 2, 4);
    harry.getData();

    // Tut22 (OOPs Recap & Nesting of Member Functions)
    
    return 0;
}

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}