#include <bits/stdc++.h>
using namespace std;
#define fori(i, a, n) for(int i =a; i<n;i++) 
#define endl '\n'

void solve(){
    int numberPrizes, points, prize, highPrize=0;
    cin >> numberPrizes>>points;

    fori(i, 0, numberPrizes){
        cin >> prize;
        if((prize > highPrize) && (prize<=points))(highPrize = prize);
    }

    cout << highPrize;
}

int main(){
    //fastIO();
    solve();
    return 0;
}
