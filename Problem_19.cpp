#include <iostream>
using namespace std;

void printPattern(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        for(int j=0; j<iniS;j++){
            cout << " ";
        }
        for(int  j=1; j<=n-i; j++){
            cout << "*";
        }
        iniS=iniS+2;
        cout << endl;
    }
    iniS = 2*n-2;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=0; j<iniS;j++){
            cout << " ";
        }
        for(int  j=1; j<=i; j++){
            cout << "*";
        }
        iniS=iniS-2;
        cout << endl;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19

    Input: 5

    Output:
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********


    */

    int n = 5;
    printPattern(n);
}