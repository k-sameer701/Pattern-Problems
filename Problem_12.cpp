#include <iostream>
using namespace std;

void printPattern(int n)
{
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {   
        
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=1;j<=space; j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12

    Input: 5

    Output:
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1

    */

    int n = 5;
    printPattern(n);
}