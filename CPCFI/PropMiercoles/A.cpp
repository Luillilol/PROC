/*
Luillilol
A. Indian Summer
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    int n;
    //map<string, string> leaves;
    cin >> n;
    vector<pair<string, string>> leaves;
    //pair<string, string> leaves; 
    string aux1, aux2, aux3;
    pair<string, string> auxPair;
    fori(i, 0, n){
        cin >> aux1>>aux2;
        auxPair.first=aux1;
        auxPair.second=aux2;
        //cout << aux1 << aux2;
        //aux3 = aux1+aux2;
        //cout << aux3;
        if(find(leaves.begin(), leaves.end(), auxPair) == leaves.end()){ //BUSCA SI EXISTE EL PAIR EN VECTOR
            leaves.push_back(auxPair);
        }
        //if(leaves)
    }
    cout << leaves.size();

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