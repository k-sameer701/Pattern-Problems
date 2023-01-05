#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limak_weight, bob_weight;
    cin >> limak_weight >> bob_weight;
    
    if( bob_weight < limak_weight){
        cout << "0" << endl;
    }
    else if(limak_weight == bob_weight)
        cout << "1" << endl;
    int count = 0;
    while(limak_weight <= bob_weight){
        limak_weight = limak_weight*3;
        bob_weight = bob_weight*2;
        count++;
    }
    cout << count << endl;
    
}