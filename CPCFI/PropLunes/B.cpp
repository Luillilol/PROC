/*
Luillilol
A. Bit ++
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;

void solve() {
    cout << "Hola";
}

int main() {
    
    fastIO();
//    setIO();

    //int t;
    //cin >> t;
    //while( t-- ) solve();
    int input, res = 0;
    string statement;
    cin >> input;
    fori(i, 0, input){
        cin >> statement;
        //cout << statement << endl;
        if(statement[1] == '+'){
            //cout << "Signo mas" << endl;
            res ++;
        }else{
            //cout << "Signo menos" << endl;
            res --;
        }
    }
    cout << res;
    return 0;
}
