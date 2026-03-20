/*
    Luillilol
    
    31ms | 20-mar-26
*/
#include <list>
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define F first
#define S second
#define PB push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define in(v) for(auto &x : v) cin >> x;
#define endl '\n'
#define out(v) for(auto x : v) cout << x << " "; cout<<endl;
const int MOD = 1e9+7;
const int INF = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;
/*
void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
*/

// Usaremos un vector para guardar las letras, cada una de solveStr tiene que verificar que existe en vectorAux, si no coincide se push y puntos +2, si existe solamnte es +1
void solve() {
    int lenString
        ,puntos=0
        ;
    string solveStr // almacena la cadena para trabajar
            ,auxString // guarda las letras que ya hayan aparecido
            ;
    cin >> lenString;
    cin >> solveStr;
    //cout << lenString << "  " << solveStr << endl;

    fori(i, 0, lenString){ // cada iteracion es para cada letra en soleStr
        //primero busca si existe esa letra dentro de auxStr.
        if(auxString.find(solveStr[i]) != string::npos){ // si es diferente de npos, o sea que existe coincidencia
            //cout << "Hay coincidencia para la letra " << solveStr[i]<< endl;
            puntos ++;
        }else{ // no existe la letra dentro de auxString
            //cout << "No hay coincidencia para la letra " << solveStr[i]<< endl;
            auxString.push_back(solveStr[i]);
            puntos += 2;
        }
    }   
    //cout << "Puntos = "<<puntos << endl<< endl;
    cout << puntos << endl;
}


int main() {    
    fastIO();
//    setIO();
    int t;
    cin >> t;
    //cout << t; // BORRAR
    while( t-- ) solve();
    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;
