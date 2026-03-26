/*
    Luillilol
    B. Two Arrays And Swaps
    31ms | 23-mar-26 
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
    int auxvector, totalSum=0;
    int k, lenvector, kCounter=0;
    int aCounter, bCounter; //contadores para iterar en ambos vectores
    
    vector <int> aVector, bVector;

    cin >> lenvector;
    cin >> k;

    //cout << lenvector << " "<< k << endl;

    fori(i, 0, lenvector){
        cin >> auxvector;
        aVector.push_back(auxvector);
    }
    sort(aVector.begin(), aVector.end());
    /*cout << "imprimiendo vector1" << endl;
    for(int key:aVector){
        cout << key << endl;
    }*/
    fori(i, 0, lenvector){
        cin >> auxvector;
        bVector.push_back(auxvector);
    }
    sort(bVector.begin(), bVector.end());
    /*cout << "imprimiendo vector2" << endl;
    for(int key:bVector){
        cout << key << endl;
    }*/

    //revisar que el menor de a sea menor al maximo de b
    aCounter=0;
    bCounter = lenvector-1;
    while(kCounter < k && aCounter<lenvector ){
        if(aVector[aCounter] < bVector[bCounter]){
            //cout << aVector[aCounter] << "es menor que " << bVector[bCounter];
            swap(aVector[aCounter], bVector[bCounter]);
            sort(aVector.begin(), aVector.end());
            sort(bVector.begin(), bVector.end());
            kCounter++;  
        }else{
            //cout << aVector[aCounter] << "NO es menor que " << bVector[bCounter];
            aCounter++;
            //cout << "aCounter= "<<aCounter;
        }
    }
    for(int i:aVector){
        totalSum += i;
    }
    cout << totalSum<<endl;
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
