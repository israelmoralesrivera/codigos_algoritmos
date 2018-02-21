#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n;
    cin >> n;
    map<string, int> equipos;
    string aux;
    string ganador;
    int mayor=0;
    for(int i=0; i<n;i++){
        cin >> aux;
        map<string, int>::iterator it = equipos.find(aux);
        if(it != equipos.end()){
            equipos[aux]++;
        }else{
            equipos[aux] = 1;
        }
        if(mayor < equipos[aux]){
            mayor = equipos[aux];
            ganador=aux;
        }
    }
    cout << ganador<<endl;

    return 0;
}
