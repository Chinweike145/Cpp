/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

    
}#include <iostream>
using namespace std;
inline int cmp(int x,int y,int z)
{
    if(x>y&&x>z)
    return(x);
    else if(y>z)
    return(y);
    else
    return(z);
    
}
int main()
{
    int a,b,c;
    cout<<"enter three numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<cmp(a,b,c)<<" is larger"<<endl;
    cout<<"OGBONNNA CHINWEIKE";
    return 0;