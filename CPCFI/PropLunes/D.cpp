/*
Luillilol
D. Way Too Long Words
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    string input;
    cin >> input;
    if(input.size() > 10){
        //cout << "mayor a 10" << endl;
        cout << input[0] << (input.size()-2) << input[input.size()-1]<<endl;
    }else
    {
        cout << input<<endl;
    }
}

int main() {
    
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    //solve();
    return 0;
}
