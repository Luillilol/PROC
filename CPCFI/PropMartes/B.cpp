/*
Luillilol
B
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    int n, d;
    cin >> n >> d;
    //cout << n << d;
    vector<int> piles(n);

    fori(i, 0, n){
        cin >> piles[i];
    }

    if(n == 1){
        cout << piles[0] << endl;
        return;
    }else{
        fori(i,0, d){
            fori(j,1,n){
                if(piles[j]>0){ //encontrando haybale para mover a la izquierda
                    piles[j]--;
                    piles[j-1]++;
                    break;
                }
            }
        }
        cout << piles[0] << endl;
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
