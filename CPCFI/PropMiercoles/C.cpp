/*
Luillilol
D. Presents
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    int n, q, m;
    cin >> n;
    vector<int> prices(n);
    fori(i, 0, n){
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());

    cin >> q; //dias donde haremos el recorrido en prices
    //iterator res;
    fori(i, 0, q){
        cin >> m; // monedas que puede gastar
        /*fori(j, 0, n){
            if(prices[j]<=m){
                res++;
            }
        }*/
        res = upper_bound(prices.begin(), prices.end(), m);

        cout << res<<endl;
    }
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