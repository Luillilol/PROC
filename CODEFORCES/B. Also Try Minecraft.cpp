/*
    Luillilol
    Also Try Minecraft
    125 ms | 17-Apr-26
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
    ll n, m, fallDamage=0;

    cin >> n >> m;
    vector<ll> height(n+1);
    vector<ll> prefixIzqDer(n+1);
    vector<ll> prefixDerIzq(n+1);

    height[0] = 0;

    fori(i, 1, n+1){
        cin >> height[i];
    }
     //cout << "imprimiendo vector2" << endl;
    /*for(int key:height){
        cout << key << " ";
    }*/
    //cout << endl;

    //Creando prefix IzqDer
    prefixIzqDer[0] = 0;
    prefixIzqDer[1]=0;
    fori(i, 2, n+1){
        //prefixIzqDer[i] = height[i] + prefixIzqDer[i-1];
        prefixIzqDer[i] = prefixIzqDer[i-1] + ( (height[i-1] - height[i] > 0 ) ? (height[i-1] - height[i]) : 0);
    }
    /*for(int key:prefixIzqDer){
        cout << key << " ";
    }
    cout << endl;*/
    
    
    //Creando PrefixDerIzq
    prefixDerIzq[n] = 0;
    prefixDerIzq[0] = 0;
    for(int i= n-1; i>0 ; i--){
        prefixDerIzq[i] = prefixDerIzq[i+1] + ((height[i+1] - height[i] > 0) ? (height[i+1] - height[i]) : 0);
    }
    /*for(int key:prefixDerIzq){
        cout << key << " ";
    }
    cout << endl;*/
     
    // p -> q
    int s, t;
    fori(i, 0, m){ // m quests
        cin >> s >> t;
        if(s - t < 0){ // IzqDerecha
            fallDamage = prefixIzqDer[t] - prefixIzqDer[s];
        }else{ // DerIzquierda
            fallDamage = prefixDerIzq[t] - prefixDerIzq[s];
        }
        cout << fallDamage<<endl; 
        fallDamage=0;
    }
    
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
