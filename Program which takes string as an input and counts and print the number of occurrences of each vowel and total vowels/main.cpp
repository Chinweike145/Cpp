/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');}
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
    if (isVowel(str[i])) 
            ++count;
    return count;}
int main()
{
    string str = "chinweike";
    cout << countVowels(str) << endl;
    cout<<"OGBONNA CHINWEIKE";
    return 0;}