/*
Luillilol
E. Next Round
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    //POSITIVE SCORE
    int n, k, res=0;
    cin >> n >> k;
    //cout << n << k;

    vector<int> lugares(n);

    fori(i, 0, n){
        cin >> lugares[i];
    }
    /*
    for(int key:lugares){
        cout << key << " ";
    }*/

    fori(i, 0, n){
        if((lugares[i]>= lugares[k-1]) && (lugares[i]>0)){
            res++;
        }
    }

    cout << res;
}

int main() {
    
    fastIO();
//    setIO();
    //int t;
    //cin >> t;
    //while( t-- ) solve();
    solve();
    return 0;
}
