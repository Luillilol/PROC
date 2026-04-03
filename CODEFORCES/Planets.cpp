/*
    Luillilol
    Problem name
    timeToSolve | date
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
void solve() {
    int numberPlanets, costSecondMachine, auxPushBack, minimunCost = 0;
    vector <int> orbits;

    cin >> numberPlanets;
    cin >> costSecondMachine;

    int auxOrbs [numberPlanets];
    //establecer cada indice en 0
    fori(i, 0, numberPlanets){
        auxOrbs[i] = 0;
    }

    fori(i, 0, numberPlanets){
        cin >> auxPushBack;
        orbits.PB(auxPushBack);
        auxOrbs[auxPushBack-1] ++;
    }

    /*
    for(int key:auxOrbs){
        cout << key;
    }
    cout << endl;
    */

    // evaluar cual de las dos opciones es mejor
    // Primera maquina -> destuir cada planeta 1 Pu
    // Segunda maquina -> destruir toda la orbita N Pu
    int costFirsMachine; // costSecondMachine
    fori(i, 0, numberPlanets){
        if(auxOrbs[i] != 0){
            //calcular la primera forma
            costFirsMachine = auxOrbs[i];
            if(costFirsMachine > costSecondMachine){
                minimunCost += costSecondMachine;
            }else{
                minimunCost += costFirsMachine;
            }
        }
    }
    cout << minimunCost << endl;

}

int main() {
    
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;
