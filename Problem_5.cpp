#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
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
    https://practice.geeksforgeeks.org/problems/triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_5

    Input: 5

    Output:
    * * * * *
    * * * * 
    * * * 
    * *  
    * 

    */

    int n = 5;
    printPattern(n);
    
    return 0;
}