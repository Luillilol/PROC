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
    int n, aux;
    cin >> n;
    vector<int> regalos(n);
    fori(i, 0, n){
        cin>>aux;
        regalos[aux-1] = i+1;
    }

    fori(i, 0, n){
        cout << regalos[i]<<" ";
    }
    /*for(int key:regalos){
        cout << key<<endl;
    }*/

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