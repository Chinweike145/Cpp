/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int largest(int a, int b ,int c)
{if(a>b && a>b)
return a;
if(b>a && b>c) return b;
else return c;}
int main()
{
int x,y,z,big;
cout<<"enter the numbers";
cin>>x>>y>>z;
big=largest(x,y,z);
cout<<"largest is:"<<big<<endl;return 0;}
