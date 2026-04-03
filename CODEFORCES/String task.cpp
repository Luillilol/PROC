/*
    Luillilol
    String Task
    timeToSolve | 3-apr-26
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
    string petyaString, resultPetya = "";
    int tamanioPetyaString;
    cin >> petyaString;
    //transformar en minusculas
    transform(petyaString.begin(), petyaString.end(), petyaString.begin(), ::tolower);
    //cout << petyaString<<endl;

    //petyaString.insert(0, "p");
    //eliminar primero las vocales
    

    tamanioPetyaString = petyaString.size();
    /*fori(i, 0, tamanioPetyaString){
        if(petyaString[i] == 'a' || petyaString[i] == 'o' || petyaString[i] == 'y' || petyaString[i] == 'e' || petyaString[i] == 'u' || petyaString[i] == 'i'){
            petyaString.erase(i, 1);
            tamanioPetyaString--;
            i--;
        }
    }*/
   
    for(char c : petyaString){
        if(!(c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')){
            resultPetya += ".";
            resultPetya += c;
        }
    }
    cout << resultPetya<<endl;
    
    //agreagando los puntos antes de 

    /*for(std::string::iterator it = petyaString.begin(); it != petyaString.end(); ++it){
        cout << *it;
        petyaString.insert(0, "x");

    }*/

    //cout<<petyaString;



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
