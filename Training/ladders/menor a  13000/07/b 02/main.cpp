#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n, m;
    cin >> n>>m;
    string s,t;
    cin >> s >> t;
    int mayor=0, cont=0;
    int posicion=0, aux=0;
    for(int i=0;i<=m-n;i++){
        cont = 0;
        for(int j=0; j<n;j++){
            aux = i;
            if(s[j] == t[i+j]){
                cont++;
            }
            if(cont>mayor){
                mayor = cont;
                posicion = aux;
            }
        }
    }
    cout << n - mayor <<endl;
    cont = 0;
    for(int i=posicion; i<posicion+n;i++){
        if(s[cont] != t[i]){
            cout << cont+1 <<" ";
        }
        cont++;
    }
    cout << endl;

    return 0;
}
