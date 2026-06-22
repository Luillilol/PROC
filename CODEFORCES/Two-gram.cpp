/*
    Luillilol
    Two-gram
    timeToSolve | 21-Apr-26
*/
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
 //cout << "imprimiendo vector2" << endl;
    /*for(int key:height){
        cout << key << " ";
    }*/
    //cout << endl;
void solve() {
    int n;
    cin >> n;
    vector<char> input(n);
    fori(i, 0, n){
        cin >> input[i];
    }
    /*for(char key:input){
        cout << key << " ";
    }*/
    //cout<<endl;

    char l, r;
    char lActual, rActual;
    int apariciones=0;
    int aparicionesHistorico=0;
    char lHistorico, rHistorico;
    
    fori(i, 0, n-1){
        lActual = input[i];
        rActual = input[i+1];
        //cout << "Actual: " << lActual << " "<< rActual << endl;

        fori(j, i, n-1){
            l = input[j];
            r = input[j+1];
            
            //cout << "l = " << l << " r = "<< r <<endl;
            //contar que sean igual
            if(l == lActual && r == rActual){
                //cout << "Son iguales"<<endl;
                apariciones ++;
            }    
        }
        //saber si el par aparece mas veces que el anterior
        if(apariciones > aparicionesHistorico){
            aparicionesHistorico = apariciones;
            lHistorico = lActual;
            rHistorico = rActual;
            //cout << "Se hace intercambio" << endl;
        }
        apariciones = 0;
        //cout << endl;
    }

    cout <<lHistorico << rHistorico;
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

#include <iostream>
#include <vector>
#include <string>

using namespace std;
