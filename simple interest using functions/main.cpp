/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int simple(int p,int r,int t)
{return(p*r*t)/100;}
int main()
{ int si,a,b,c; 
    cout<<"enter the principa,rate,time "<<endl;
    cin>>a>>b>>c;
    si=simple(a,b,c);
    cout<<"the simple interest ="<<si<<endl;
return 0;
}