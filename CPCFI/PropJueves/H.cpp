/*
Luillilol
H
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    int n, s=0, d=0, l, r, turno=0; // turno -> 0 = S, turno -> 1 = D
    cin >> n;
    vector<int> cartas(n);
    fori(i, 0, n){
        cin >> cartas[i];
    }
    l = 0;
    r = n-1; // definimos indices left y right

    while(l<r){
        //cout << l << " " << r << endl;
        if(cartas[l] > cartas[r]){ // jugador agarra carta izq
            //cout << "Izq"<<cartas[l] << " " << cartas[r] << endl;
            if(turno == 0){
                s += cartas[l];
                turno = 1;
            }else{
                d += cartas[l];
                turno = 0;
            }
            l ++;

        }else{ // S agarra carta der
            //cout << "Der"<<cartas[l] << " " << cartas[r] << endl;
            if(turno == 0){
                s += cartas[r];
                turno = 1;
            }else{
                d += cartas[r];
                turno = 0;
            }
            r --;
        }
    }
    if(l == r){
         if(turno == 0){
                s += cartas[r];
                turno = 1;
        }else{
                d += cartas[r];
                turno = 0;
        }
    }
    cout << s << " " << d;
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