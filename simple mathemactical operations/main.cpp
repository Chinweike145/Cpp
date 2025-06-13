/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,b,sum,mul,sub;
    float divide;
    cout<<"enter the numbers";
    cin>>a>>b;
    sum=a+b;
    cout<<"Addition="<<sum<<endl;
    mul=a*b;
    cout<<"Multiplication="<<mul<<endl;
    sub=a-b;
    cout<<"Subtraction="<<sub<<endl;
    divide=a/b;
    cout<<"Division="<<divide;
     return 0;
}