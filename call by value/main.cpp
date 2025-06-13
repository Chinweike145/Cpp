/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void swap(int x,int y){
    int temp;
    temp=y;
    y=x;
    x=temp;
}int main(){
    int x,y;
    swap(x=10,y=20);
    cout<<"x="<<x<<"\n";
    cout<<"y="<<y;
    return 0;
}