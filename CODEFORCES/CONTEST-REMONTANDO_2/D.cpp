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
 //cout << "imprimiendo vector2" << endl;
    /*for(int key:height){
        cout << key << " ";
    }*/
    //cout << endl;
void solve() {

    int n, k;
    cin >> n >> k;

    char matriz[n][n];
    int aux;
    
    fori(i, 0, n){
        fori(j, 0, n){
            cin >> matriz[i][j];
            //cout << matriz[i][j];
        }
    }

    /*fori(i, 0, n){
        fori(j, 0, n){
            cout << matriz[i][j];
        }
        cout << endl;
    }*/

    char matrizResultante[n/k][n/k];
    int x=0, y=0;

    for(int i = 0; i <(n/k) ; i++){
        for(int j = 0 ; j < (n/k) ; j++){
            matrizResultante[i][j] = matriz[x][y]; 
            y = y + k;
        }
        
    }
    
    
    


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
