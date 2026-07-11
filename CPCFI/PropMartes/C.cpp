/*
Luillilol
C
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
    int n, indice=0;
    cin >> n;
    //vector<int> elementos(n);
    map<int, int> elementos;
    int aux;
    fori(i, 0, n){
        cin >> aux;
        elementos[aux]++;
    }
    
    //sort(elementos.begin(), elementos.end());


    /*if(n==1){
        if(elementos[0]==2048){
            cout << "YES" << endl;
            return;
        }else{
            cout << "NO"<< endl;
            return;
        }
    }else{
        fori(i, 0, n-1){
            //cout << "Elemento: " << elementos[i] ;
            if(elementos[i]==2048){
                cout << "YES" << endl;
                return;
            }else{
                if(elementos[i] == elementos[i+1]){ // podemos sumar
                    elementos[i+1]*=2;
                    //cout << "mulitplicando";
                    //elementos.erase(elementos.begin()+i);
                }else{ // no podemos sumar

                }
            }
        }
        if(elementos[n-1] == 2048){
            cout << "YES" << endl;
            return;
        }        
    }
    cout << "NO" << endl;*/
    //elementos.erase(elementos.begin()+1);


    /*for(int key : elementos){
        cout << key << " ";
    }
    cout << endl;*/
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