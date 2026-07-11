/*
Luillilol
A
*/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;


void solve() {
    int n, c, aux, res=0;
    cin >> n >> c; // numplanetas y costo 2da maquina
    map<int, int> orbitas;
    fori(i, 0, n){
        cin >> aux;
        orbitas[aux]++; // si existe la llave solo le suma 1 al valor
    }
    /*
    for(pair par : orbitas){
        cout << par.first << " "<<par.second << " ";
        cout << endl;
    }*/
    for(pair par : orbitas){
        if(par.second > c){
            res+= c;
        }else{
            res +=par.second;
        }
    }
    
    cout << res << endl;
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
