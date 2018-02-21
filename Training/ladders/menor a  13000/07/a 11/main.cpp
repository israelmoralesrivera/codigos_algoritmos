#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int n;

    cin >> n;

    char letras[2000101];
    memset(letras, '\0' , sizeof(letras));
    string aux;
    int l;
    int ultimo=0;
    for(int i=0; i<n; i++){
        cin >> aux >> l;
        int otro;
        while(l--){
            cin >>otro;
            for(int j=otro-1; j<aux.length()+otro-1; j++){
                letras[j] = aux[j - otro + 1];
                ultimo = max(ultimo, j);
            }
        }
    }
    for(int i=0; i<=ultimo; i++){
        if(letras[i] == '\0'){
            cout << 'a';
        }else{
            cout << letras[i];
        }
    }
    cout << endl;

    return 0;
}
