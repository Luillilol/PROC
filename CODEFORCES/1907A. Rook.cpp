/*
    Luillilol.
    1907A-Rook
    31ms | 18-Mar-26
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
void solve() { //aqui va el codigo para cada posicion
    string pos, lett ,num;
    cin >> pos;
    lett = pos[0]; //letra
    num = pos[1]; // numero
    string numbers[8]={"1", "2", "3", "4", "5", "6", "7", "8"};
    string letters[8]{"a", "b", "c", "d", "e", "f", "g", "h"};    
    //estructura para navegar entre todos los numeros con misma letra
    fori(i, 0, 8){
        if(num.compare(numbers[i]) != 0){
            cout << lett<<numbers[i]<<"\n";
        }
    }
    //estructura para navegar entre todos las letras con el mismo numero
    fori(i, 0, 8){
        if(lett.compare(letters[i]) != 0){
            cout << letters[i]<<num<<"\n";
        }
    }
}
int main() {
    fastIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;
