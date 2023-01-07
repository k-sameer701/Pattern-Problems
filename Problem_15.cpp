#include <iostream>
using namespace std;

void printPattern(int n)
{
    
    for (int i = 1; i <= n; i++)
    {   
        for(char ch='A'; ch <= 'A'+n-i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_15

    Input: 5

    Output:
    ABCDE
    ABCD
    ABC
    AB
    A

    */

    int n = 5;
    printPattern(n);
}