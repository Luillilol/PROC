/*
Luillilol
A. Watermelon
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fastIO();
    
    int x;
    cin >> x;
    
    if(x%2==0){
        if(x == 0 || x == 2){
            cout << "NO";
            return 0;
        }
        cout << "YES ";
        return 0;
    }
    cout << "NO";
}