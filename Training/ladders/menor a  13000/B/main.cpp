#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int res=1;
        string aux;
        string numeros[n];
        for(int i=0; i<n; i++){
            cin >> aux;
            sort(aux.begin(), aux.end());
            string orden = "";
            orden+=aux[0];
            int ultimo=0;
            for(int j=1; j<aux.length();j++){
                if(orden[ultimo] != aux[j]){
                    orden+=aux[j];
                    ultimo++;
                }
            }
            numeros[i] = orden;
        }
        sort(numeros, numeros+n);
        for(int i=1; i<n;i++){
            if(numeros[i]!=numeros[i-1]){
                res++;
            }
        }
        cout <<res<<endl;
    }
    return 0;
}
