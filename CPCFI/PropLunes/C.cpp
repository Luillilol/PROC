/*
Luillilol
C. Team
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    // Petya, vasya y tonya
    // se implementa un problema si al menos dos estan seguros de la solucion

    int i;
    int p, v, t, res=0;
    cin >> i;
    fori(j, 0, i){
        cin >> p >> v >> t;
        //cout << p <\< v << t << endl;
        if( (p + v + t)>=2 ){
            //cout << "Si ";
            res++;
            //cout << res << endl;
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

