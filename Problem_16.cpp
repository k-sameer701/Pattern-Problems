#include <iostream>
using namespace std;

void printPattern(int n)
{
    
    for (int i = 1; i <= n; i++)
    {   
        char ch = 'A' + i - 1;
        for(int j=1; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_16

    Input: 5

    Output:
    A
    BB
    CCC
    DDDD
    EEEEE

    */

    int n = 5;
    printPattern(n);
}