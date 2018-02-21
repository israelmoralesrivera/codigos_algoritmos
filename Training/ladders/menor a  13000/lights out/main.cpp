#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int matriz[5][5];
    memset(matriz, 0, sizeof(matriz));
    int resultado[5][5];
    memset(resultado,1, sizeof(resultado));

    FOR(i,0,5){
        FOR(j,0,5){
            resultado[i][j] = 1;
        }
    }

    FOR(i,1,4){
        FOR(j,1,4){
           cin >> matriz[i][j];
        }
    }

    FOR(i,1,4){
        FOR(j,1,4){
            if(matriz[i][j]%2){
                resultado[i][j] = resultado[i][j]==1? 0:1;
                resultado[i+1][j] = resultado[i+1][j]==1? 0:1;
                resultado[i-1][j] = resultado[i-1][j]==1? 0:1;
                resultado[i][j+1] = resultado[i][j+1]==1? 0:1;
                resultado[i][j-1] = resultado[i][j-1]==1? 0:1;
            }
        }
    }
    FOR(i,1,4){
        FOR(j,1,4){
            cout << resultado[i][j];
        }
        cout <<endl;
    }

    return 0;
}
