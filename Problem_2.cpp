#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{

    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2

    Input: 5

    Output:
    * 
    * * 
    * * * 
    * * * * 
    * * * * *

    */

    int n = 5;

    printPattern(n);
    return 0;
}