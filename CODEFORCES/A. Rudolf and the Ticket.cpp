/*
    Luillilol
    A. Rudolf and the Ticket
    46ms | 20/mar/26
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
void solve(){
    int lenpocket1, lenpocket2, k;
    int auxpocket, sum=0;
    vector<int> pocket1, pocket2;
    //recoger primero los 3 primeros valores
    cin >> lenpocket1;
    cin >> lenpocket2;
    cin >> k;
    //cout<<lenpocket1<< " "<< lenpocket2 << " "<<k << endl;

    //recoger el bolso derecho
    fori(i, 0, lenpocket1){
        cin >> auxpocket;
        pocket1.push_back(auxpocket);
    }
    //cout << "imprimiendo vector1" << endl;
    /*for(int key:pocket1){
        cout << key << endl;
    }*/
    //recoger el bolso izquierdo
    fori(i, 0, lenpocket2){
        cin >> auxpocket;
        pocket2.push_back(auxpocket);
    }
    //cout << "imprimiendo vector2" << endl;
    /*for(int key:pocket2){
        cout << key << endl;
    }*/

    //combinando por fuerza bruta
    //iterando en cada elemento de pocket1
    fori(pk1, 0, lenpocket1){
        //iterar en cada elemento de pocket2
        fori(pk2, 0, lenpocket2){
            //realizar la suma y comprobar que sea igual o menor a k
            if(pocket1[pk1] + pocket2[pk2] <= k){//es menor o igual por lo tanto sum++
                sum++;
            }
        }
    }
    cout <<sum<<endl;

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
