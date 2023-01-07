#include <iostream>
using namespace std;

void printPattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        for(char ch='E'-i; ch<='E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_18

    Input: 5

    Output:
    E
    E D
    E D C
    E D C B
    E D C B A


    */

    int n = 5;
    printPattern(n);
}