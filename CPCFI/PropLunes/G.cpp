/*
Luillilol
G. IQ test
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
using namespace std;

void listaImpar(vector<int> lista, int n){
    //cout << "Lista impar " <<endl;
    /*for(int key:lista){
        cout << key << " ";
    }*/
    fori(i, 0, n){
        if(lista[i] %2 ==0){
            cout << i+1;
        }
    }
}

void listaPar(vector<int> lista, int n){
    //cout << "Lista par " <<endl;
    /*for(int key:lista){
        cout << key << " ";
    }*/
    fori(i, 0, n){
        if(lista[i] %2 !=0){
            cout << i+1;
        }
    }
}

void solve() {

    int n;
    cin >> n;
    vector<int> lista(n);
    fori(i, 0, n){
        cin >> lista[i];
    }

    //para determinar si es lista de pares o impares
    if(lista[0]%2 == 0){
        //primer numero par y verificar los otros dos
        if(lista[1]%2 == 0){
            // segundo numreo par e ITERAR LA LISTA ES DE PARES
            listaPar(lista, n);
        }else{
            //segundo numero impar y verificar el tercer numero
            if(lista[2]%2 == 0){
                //tercer numero par e ITERAR LA LISTA DE PARES
                listaPar(lista, n);
            }else{
                //tercer numero impar e ITERAR LISTA DE IMPARES
                listaImpar(lista, n);
            }
        }

    }else{
        //primero numero impar
        if(lista[1]%2 == 0){
            // segundo numero par y verificar el tercero
            if(lista[2]%2 == 0){
                //tercer numero par e ITERAR LA LISTA DE PARES
                listaPar(lista, n);
            }else{
                //tercer numero impar e ITERAR L LISTA DE IMPARES
                listaImpar(lista, n);
            }
        }else{
            //segundo numero impar e ITERAR LA LISTA DE IMPARTES
            listaImpar(lista, n);
        }
    }



    /*for(int key:lista){
        cout << key << " ";
    }*/

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
