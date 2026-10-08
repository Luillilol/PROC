/*
    Luillilol
    B. Square or Not
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
bool esRaizEntero(int n ){
    if(n<0)
        return false;

    int raiz  = round(sqrt(n));
    return (raiz * raiz == n);
}


void solve() {
    int n, r;
    string bMatrix;
    cin >> n;
    cin >> bMatrix;
    if(!esRaizEntero(n)){
        cout << "No"<<endl;
        return;
    }

    //
    int isCero=true, isOne=true;
    if(n == 4){
        //VERIFICAR QUE TODA LA CADENA SEA 1
        //cout << "4"<<endl;
        fori(i, 0, 4){
            if(bMatrix[i]=='0'){
                isOne=false;
            }
        }   
    }else{

        //cout << isCero << isOne<< endl<<endl;
        r = sqrt(n);
        //cout << "r = "<< r;
        for(int i = 2 ; i < r ; i++){
            for(int j = 2 ; j < r ;j++){
                //cout <<((i-1)*r)+j<< " ";
                //cout << bMatrix[(((i-1)*r)+j)-1];
                if(bMatrix[(((i-1)*r)+j)-1] == '1'){
                    isCero=false;
                }
            }
            //cout << endl;
        }
    
        for(int i = 2 ; i<r; i++){
            for(int j = 1 ; j<r+1;j++){
                if(j==1 || j==r){
                    //cout <<((i-1)*r)+j<< " ";
                    if(bMatrix[((i-1)*r)+j-1] == '0')
                        isOne=false;
                }
            }
        }
    
        //cout <<endl;
        
        for(int i = 1 ; i<r+1; i++){
            for(int j = 1 ; j<r+1;j++){
                if((i==1 || i==r)){
                    //cout <<((i-1)*r)+j<< " ";
                    if(bMatrix[((i-1)*r)+j-1] == '0')
                        isOne=false;
                }
            }
        }
    }
    

//cout << isCero << " " << isOne<<endl;
    if(isCero && isOne){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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
