#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{

    int n;
    cin >> n;

    int numeros[n];
    int copia[n];
    int aux;
    for(int i=0; i<n; i++){
        cin >> aux;
        numeros[i] = aux;
        copia[i] = aux;
    }
    sort(copia, copia + n);

    if(n==1){
        cout << 1 <<endl;
    }else if(copia[0] != copia[1]){
        for(int i=0; i<n;i++){
            if(numeros[i]== copia[0]){
                cout << i+1<<endl;
            }
        }
    }else{
        cout << "Still Rozdil"<<endl;
    }

    return 0;
}
