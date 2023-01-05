#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{

    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-number/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_3

    Input: 5

    Output:
    1
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5

    */

    int n = 5;
    printPattern(n);
    
    return 0;
}