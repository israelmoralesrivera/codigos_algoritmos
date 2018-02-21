#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    long long  filas, columnas, bow;

    while(true){
        cin >> filas >> columnas >> bow;
        if (filas == 0 && columnas==0 && bow==0){
            return 0;
        }
        if(filas == 8 && columnas == 8 && bow == 0){
            cout  << 0 << endl;
            continue;
        }

        long long resultado = 0;
        for(int i=0; i + 8<=filas;i++){
            resultado += (columnas - bow - 8 + 1)%2 + ( columnas - bow - 8 + 1)/2;
        }
        cout << resultado<<endl;

    }

    return 0;
}
