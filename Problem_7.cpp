#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int row = 1; row <= n; row++)
    {

        // SPACES
        for (int space = 1; space <= n - row; space++)
            cout << "  ";

        // STARS
        for (int star = 1; star <= 2 * row - 1; star++)
            cout << "*" << " ";

        cout << endl;
    }
}

int main()
{

    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_7

    Input: 5

    Output:
        *
       ***  
      *****
     *******
    *********

    */

    int n = 5;
    
    printPattern(n);
    return 0;
}