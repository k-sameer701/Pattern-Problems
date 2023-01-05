#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{

    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-number-1661428795/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_4

    Input: 5

    Output:
    1
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5

    */

    int n = 5;
    printPattern(n);
    return 0;
}