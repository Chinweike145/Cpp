/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void convertOpposite(string& str)
{
    int ln = str.length();
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}
 int main()
{
    string str = "This Is A Dog";
    convertOpposite(str);
     cout << str<<endl;
     cout<<"OGBONNA CHINWEIKE_92100151004";
    return 0;
}