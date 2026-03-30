/*
    Luillilol
    Moving Chips
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
    int contOperation=0;
    int ribLen;
    vector <int> chipsRib;
    int ribAux, counterOne=0;
    //
    int indexFirstOne, indexLastOne;
    bool firstOne=true, lastOne=true;
    int distanciaEntreUnos=0, cerosIntermedios=0;


    cin >> ribLen;
    
    //cout << ribLen<<endl;

    
    fori(i, 0, ribLen){
        cin >> ribAux;
        chipsRib.push_back(ribAux);
        if(ribAux == 1){
            counterOne++;
        }
    }
    //cout << "Hay "<<counterOne<< "unos" << endl;
    //cout << "imprimiendo vector1" << endl;
    /*for(int key:chipsRib){
        cout << key;
    }
    cout << endl;*/
    


    //verificar primero que no exista solo un 1
        //verificar si existe el bloque de 1
    if(counterOne==1){
        cout << "0"<< endl;
    }else{
        //buscar el primer 1
        //firstOne
        fori(i, 0, ribLen){
            if(chipsRib[i]==1 && firstOne){
                indexFirstOne = i;
                //cout << "El primer 1 es: "<<indexFirstOne<<endl;
                firstOne =false;
            }
        }
        //buscar el ultimo 1
        for(int i = ribLen-1; i>=0;i--){
            if(chipsRib[i]==1 && lastOne){
                indexLastOne = i;
                //cout << "El ultimo 1 es: "<<indexLastOne<<endl;
                lastOne =false;
            }
        }

        //calculando si hay 0 entre esos numeros
        //Distancia entreprimero y ultimo - cantidad unos
        distanciaEntreUnos = (indexLastOne+1) - indexFirstOne;
        //cout << "Hay "<< distanciaEntreUnos <<  " de distancia";

        cerosIntermedios = distanciaEntreUnos - counterOne;
        //cout <<"Hay "<< cerosIntermedios << " ceros intermedios"<<endl;

        //se tiene que iterar *cerosIntermedios* veces
        bool firstOne=true;
        bool firstZero = true;
        fori(i, 0, cerosIntermedios){
            //el ultimo indice mover al primer cero
            //encontrar el ultimo 1
            for(int j=indexLastOne;j>indexFirstOne;j--){
                if(chipsRib[j]== 1 && firstOne ){//encontrar el primer 1 de izq <- der
                    //aqui ya detectamos el primer 1 y tenemos que encontrar el primer 0
                    for(int k= j ; k>indexFirstOne;k--){
                        if(chipsRib[k] == 0 && firstZero){
                            swap(chipsRib[j], chipsRib[k]);
                            //cout << "Intercambio de indice "<< j << "y "<< k<<endl;
                            firstZero=false;
                            contOperation++;
                        }
                    }
                    firstOne=false;
                }
            }
            firstOne=true;
            firstZero=true;
            /*for(int key:chipsRib){
                cout << key;
            }
            cout << endl;*/

        }
        cout << contOperation<<endl;       
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
