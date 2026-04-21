/*
    Luillilol
    Cut the Array
    31ms | 20-Apr-26
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
    int n;
    cin >> n;
    vi numbers(n);
    vi prefix(n+1);
    prefix[0] = 0;
    
    fori(i, 0, n){
        cin >> numbers[i];
    }
    //Building prefixSum
    fori(i, 1, n+1){
        prefix[i] = numbers[i-1] + prefix[i-1];
    }

     //cout << "imprimiendo vector2" << endl;
    /*for(int key:prefix){
        cout << key << " ";
    }
    cout << endl<<endl;*/


    int s1, s2, s3;
    int ansL=0, ansR=0;
    fori(l, 1, n-1){
        fori(r, l+1, n){
            //Calculo prefix up (s1)
            s1 = prefix[l] % 3;
            //calculo mid (s2)
            s2 = (prefix[r] - prefix[l]) % 3;
            //calculo possix (s3)
            s3 = (prefix[n] - prefix[r]) %3;
            //cout << s1 << " "<<s2 << " "<<s3 << "L: "<< l << " R: "<< r <<endl; 
            if( (s1==s2 && s2==s3) || (s1!=s2 && s2!=s3 && s1!=s3) ){
                ansL = l;
                ansR= r;
            }
        }
    }
    cout << ansL << " " << ansR << endl;
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
