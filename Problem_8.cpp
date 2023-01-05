#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * (n - row) - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

    Input: 5

    Output:

    *********
     *******
      *****
       ***
        *

    */

    int n = 5;

    printPattern(n);
}
