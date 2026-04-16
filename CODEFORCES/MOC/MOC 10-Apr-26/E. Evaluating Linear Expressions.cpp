#include <iostream>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a< c ; a++)

using namespace std;
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
void solve(){
    int a,b,k;
    int result;
    cin >> a >> b >> k;

    // ax + b
    //iteraciones k veces 
    fori(i, 1, k+1){
        result = (a * i) + b;
        cout << result <<" ";
    }        
}
int main(){
    fastIO();
    solve();
    return 0;
}