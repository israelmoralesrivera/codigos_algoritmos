#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int numeros[4][4];
    FOR(i,0,4){
        FOR(j,0,4){
            cin >> numeros[i][j];
        }
    }
    FOR(i,0,4){
        if(numeros[i][3]){
            if(numeros[i][0] || numeros[i][1] || numeros[i][2]){
                cout <<"YES"<<endl;
                return 0;
            }
        }
    }
    if(numeros[0][3]){
        if(numeros[1][0] || numeros[2][1] || numeros[3][2]){
            cout <<"YES"<<endl;
            return 0;
        }
    }
    if(numeros[1][3]){
        if(numeros[0][2] || numeros[2][0] || numeros[3][1]){
            cout <<"YES"<<endl;
            return 0;
        }
    }if(numeros[2][3]){
        if(numeros[0][1] || numeros[3][0] || numeros[1][2]){
            cout <<"YES"<<endl;
            return 0;
        }
    }
    if(numeros[3][3]){
        if(numeros[0][0] || numeros[1][1] || numeros[2][2]){
            cout <<"YES"<<endl;
            return 0;
        }
    }
    cout <<"NO"<<endl;

    return 0;
}
