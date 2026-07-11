/*
Luillilol
C
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;

//COMO 67 ES PRIMO SOLO TENEMOS QUE ENCONTRAR SI SE ENCUENTRA EN LA LISTA DE NUMEROS EL 1 Y EL 67
void solve() {
    int n, a=0, b=0, aux;
    cin >> n;
    fori(i, 0, n){
        cin >> aux;
        if(aux == 1){
            a=1 ;
        }else if(aux == 67){
            b=1;
        }
    }

    if(b==1){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
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