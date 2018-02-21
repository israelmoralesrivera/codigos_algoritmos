#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int n,m;
    cin >> n >> m;
    string pisos[n];
    FOR(i,0,n){
        cin >> pisos[i];
    }
    int cercanos[n][2];
    memset(cercanos, 0 , sizeof(cercanos));
    FOR(i,0,n){
        int menor=102, mayor = 0;
        FOR(j,0,m+2){
            if(pisos[i][j] == '1' && j< menor){
                menor = j;
                cercanos[i][0] = menor;
            }
            if(pisos[i][j] == '1' && j> mayor){
                mayor = j;
                cercanos[i][1] = mayor;
            }
        }
        if(mayor == 0){
            cercanos[i][0] = 0;
            cercanos[i][1] = 0;
        }
    }

    FOR(i,0,n){
        cout << cercanos[i][0]<<"   "<<cercanos[i][1]<<endl;
    }

    int res=cercanos[n-1][1];
    int piso=1;
    int a=n-1; b=cercanos[n-1][1];
    FORD(i,0,n-2){
        if(cercanos[i][0] == 0){
            piso++;
        }else{
            cout << res<<endl;
            res += min(cercanos[i+1][0]+piso + cercanos[i][0], (m + 1 - cercanos[i+1][1]) + piso + (m+1 - cercanos[i][1]));
            piso=1;
            if(cercanos[a][b]+piso + cercanos[i][0] > (m + 1 - cercanos[a][b]) + piso + (m+1 - cercanos[i][1])){
                res+= (m + 1 - cercanos[a][b]) + piso + (m+1 - cercanos[i][1]);
                res+= abs(cercanos[i][b] - cercanos[i][1]);
                a = i;
            }else{
                res+= cercanos[a][b]+piso + cercanos[i][0];
                a = i;
                b = cercanos[i][1];
            }
        }
    }
    cout << res<<endl;

    return 0;
}
