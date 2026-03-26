/*
    Luillilol
    A. Dual Trigger
    31ms | 26/mar/26
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
    int sLen, onCounter=0;
    string lamps;
    bool firstTime=true;

    cin >> sLen;
    cin >> lamps;

    //cout << sLen << " " << lamps << endl;
    for(int key:lamps){
        if(key=='1'){
            //cout << "es 1"<<endl;
            onCounter++;
        }
    }
    //cout << onCounter << "prendidas" << endl ;

    //verificar que cuanda sea 0, diga YES
    // verificar cuando hay 2 velas que esten separadas
    if(onCounter == 0){
        cout << "YES" <<endl;
    }else if(onCounter == 2){//verificar que esten separadas
         fori(i, 0, sLen){
            if(lamps[i]=='1' && firstTime){
                if(lamps[i+1] == '1'){
                    //cout << "2 unos, estan juntos" << endl;
                    cout << "NO" << endl;
                }else{
                    cout << "YES" << endl;
                }
                firstTime = false;
            }
         }
    }else if(onCounter%2 == 0){
        cout<< "YES" << endl;
    }else{
        cout << "NO" << endl;
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
