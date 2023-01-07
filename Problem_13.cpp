#include <iostream>
using namespace std;

void printPattern(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {   
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_13

    Input: 5

    Output:
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15

    */

    int n = 5;
    printPattern(n);
}