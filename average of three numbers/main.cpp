/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{ int a,b,c;
 float avg;
    cout<<"ENTER THE NUMBERS:";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<"AVERAGE="<<avg<<endl;
    if(a>=b && a>=c){
        cout<<"a is maximum"<<endl;
    }
    if(b>=a && b>=c){
        cout<<"b is maximum"<<endl;
    }
    else if(c>=a && c>=b){
        cout<<"c is maximum"<<endl;
    }if(a<b && a<c)
    {cout<<"a is minimum";}
   if(b<a && b<c)
    {cout<<"b is minimum";}
    else { cout<<"c is minimum";}
    
    return 0;
}

