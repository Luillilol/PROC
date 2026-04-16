/*
    Luillilol
    Codeforces Subsequences
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
    ll subsequences;
    //      C       O       D       E       F       O       R       C       E      S
    //int pos0=1, pos1=1, pos2=1, pos3=1, pos4=1, pos5=1, pos6=1, pos7=1, pos8=1, pos9=1;
    int pos[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string result = "codeforce";
    cin >> subsequences;
    //cout << subsequences <<endl;
    fori(i, 0, subsequences){
        result += 's';
    }

    //ir de poco a poco incrementando ++ a cada variable
    // si la multiplicacion de todos da menor a subsequences, seguir con lo suyo
    // si la multiplicacion se pasa
    int i=0;
    
    
    
    bool minorThan = true;
    while (i<10){
        if((pos[0]*pos[1]*pos[2]*pos[3]*pos[4]*pos[5]*pos[6]*pos[7]*pos[8]*pos[9] < subsequences ) && (minorThan)){
            i++;            
        }
        if(i==10){
            i==0;
        }
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
