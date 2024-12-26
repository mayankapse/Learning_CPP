#include<iostream>
#include <iomanip> // Required for setw
using namespace std;

int c=0;
int main(){
    //Tut7 (Reference Variable and Typecasting)
    int c = 2+2;
    cout<<"c = "<<c<<endl;
    cout<<"global c (::c) = "<<::c<<endl;   //:: is scope resolution operator

    float a = 3.5f;             //F is used to specify float
    long double b = 3.5L;       //l is used to specify long double
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"The size of the 34.4 is "<<sizeof(34.4)<<endl;           //Size will be 8 bcoz by default type is double
    cout<<"The size of the float 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"The size of the long double 34.4 is "<<sizeof(34.4l)<<endl;

    //Reference variable
    int &d = c; //& is the reference variable
    cout<<d<<endl;

    //Typecasting
    float e = 13.05f;
    cout<<float(e)<<endl;

    // ************************************************************************************************
    // Tut8 (Constants, Manipulators and Operator Precendence)
    const int constant = 0;
    // constant = 1; can not change constant variable value

    //Manipulators
    cout<<"Without setw: "<<0<<endl;
    cout<<"with setw: "<<setw(4)<<0<<endl;

    // Operator Precedence 1.Precedence(Higher Rank Operations performed 1st) 2.Associativity(Left to Right/Right to Left)
    // For ex. int a = ((((a/4)*2)+57)-1);

    // ************************************************************************************************
    // Tut9 (Control Structure, If Else and Switch Case Statements)
    //Type of Basic Control Structures: 1.Sequence(code executes line by line) 2.Selection(if else) 3.Loop

    int age;
    cout<<"Age:";
    cin>>age;
    if(age<0) {
        cout<<"Invalid Input"<<endl;
    }
    else if ((age<18) && (age>0)) {
        cout<<"You are Kid"<<endl;
    }
    else {
        cout<<"You are an Adult"<<endl;
    }

    switch (age)
    {
    case 0:
        cout<<"You are less than 1year, New Born Baby"<<endl;
        break;
    case 100:
        cout<<"Congrats, you are 100years old"<<endl;

    default:
        cout<<"No special cases"<<endl;
        break;
    } 

    // ************************************************************************************************
    // Tut10 (While and Do-While loops)
    for (int i = 0; i < 3; i++){
        cout<<"Jai Gurudev"<<endl;
    }

    int i = 1;
    while (i<=3){
        cout<<i<<endl;
        i++;
    }

    // do while loop runs atleast once without checking condition
    do{
        cout<<"Hello World"<<endl;
    } while (false); // loop runs at most once, even though condition is false
    
    return 0;
}