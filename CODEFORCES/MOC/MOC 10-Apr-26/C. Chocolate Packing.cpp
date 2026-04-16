#include <iostream>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a< c ; a++)

using namespace std;
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }



void solve(){
    int L, W, H, l, w, h;
    int res1, res2, res3;
    int maximumChocolates = 0 ;
    cin >> L >> W >> H >> l>> w>> h;
    //cout << L << W << H << l<< w<< h;
    //res = H / h;
    //cout << res;
    
    //Analizando 6 casos...
    
    //Caso 1
    res1 = L /l;
    res2 = W/w;
    res3 = H/h;
    if ((res1*res2*res3)> maximumChocolates)
    {
        maximumChocolates = (res1*res2*res3);
    }
    // cout << "Res1:"<<res1<< " Res2: "<< res2<< " Res3:"<<res3<< " MAX: "<<maximumChocolates<<endl;


    //case 2
    res1 = W /l;
    res2 = L/w;
    res3 = H/h;
    if ((res1*res2*res3)> maximumChocolates)
    {
        maximumChocolates = (res1*res2*res3);
    }
    //cout << "Res1:"<<res1<< " Res2: "<< res2<< " Res3:"<<res3<< " MAX: "<<maximumChocolates<<endl;

    //case 3
    res1 = W / w;
    res2 = L / h;
    res3 = H / l;
    if ((res1*res2*res3)> maximumChocolates)
    {
        maximumChocolates = (res1*res2*res3);
    }
    //cout << "Res1:"<<res1<< " Res2: "<< res2<< " Res3:"<<res3<< " MAX: "<<maximumChocolates<<endl;

    //Case 4
    res1 = W / l;
    res2 = L / h;
    res3 = H/w;
    if ((res1*res2*res3)> maximumChocolates)
    {
        maximumChocolates = (res1*res2*res3);
    }
    //cout << "Res1:"<<res1<< " Res2: "<< res2<< " Res3:"<<res3<< " MAX: "<<maximumChocolates<<endl;
    
    
    //case 5
    res1 = L /l;
    res2 = W/h;
    res3 = H/w;
    if ((res1*res2*res3)> maximumChocolates)
    {
        maximumChocolates = (res1*res2*res3);
    }
    //cout << "Res1:"<<res1<< " Res2: "<< res2<< " Res3:"<<res3<< " MAX: "<<maximumChocolates<<endl;

    //case 6
    res1 = L / w;
    res2 = W / h;
    res3 = H / l;
    
    if ((res1*res2*res3)> maximumChocolates)
    {
        maximumChocolates = (res1*res2*res3);
    }
    //cout << "Res1:"<<res1<< " Res2: "<< res2<< " Res3:"<<res3<< " MAX: "<<maximumChocolates<<endl;
    
    cout << maximumChocolates;
    

}
int main(){
    fastIO();
    solve();
    return 0;
}