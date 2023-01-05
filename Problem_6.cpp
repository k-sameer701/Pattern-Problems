#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = n; i > 0; i--)
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
    https://practice.geeksforgeeks.org/problems/triangle-number-1661489840/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_6

    Input: 5

    Output:
    1 2 3 4 5
    1 2 3 4
    1 2 3 
    1 2  
    1

    */

    int n = 5;
    printPattern(n);
    return 0;
}