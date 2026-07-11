/*
Luillilol
D
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    int n, t, l, r, res=0, cont=0, libros;
    cin >> n >> t;
    vector<int> minutos(n);
    fori(i, 0, n){
        cin >> minutos[i];
    }

    l=0;
    r=0;
    cont=0;
    libros=0;

    while(l<n){
        if(r<n){
            if(minutos[r]+ cont <= t){ // el libro contempldo no se pasa dle tiempo
                libros++;
                cont += minutos[r];
                r++;
            }else{ // el libro contemplado se pasa del tiempo
                if(libros>res){
                    res =libros;
                }
                l++;
                r=l;
                cont=0;
                libros=0;

            }

        }else{
            if(libros>res){
                    res =libros;
            }
            l++;
            r=l;
            cont=0;
            libros=0;
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