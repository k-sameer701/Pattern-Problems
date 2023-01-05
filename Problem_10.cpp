#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
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
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_10

    Input: 5

    Output:
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *

    */
    int n = 5;
    printPattern(n);
}