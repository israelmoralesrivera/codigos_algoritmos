#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

string agrandar(string palabra, int n){
    if(!n) return "";
    return palabra + agrandar(palabra, n-1);
}


int main()
{
    int k;
    string entrada;
    cin >> k;
    cin >> entrada;

    map<char, int> mapa;
    for(int i=0; i< entrada.length();i++){
        map<char, int>::iterator it = mapa.find(entrada[i]);
        if(it != mapa.end()){
            mapa[entrada[i]]++;
        }else{
            mapa[entrada[i]] = 1;
        }

    }
    string resultado = "";
    for(map<char, int>::iterator it=mapa.begin(); it != mapa.end();++it){
        stringstream ss;
        string aux;
        if((it->second)%k != 0){
            cout << -1 <<endl;
            return 0;
        }
        ss << it->first;
        ss >> aux;
        resultado += agrandar(aux, (it->second) / k);
    }
    cout << agrandar(resultado, k) <<endl;

    return 0;
}
