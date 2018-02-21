#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int a,b,c,d,e;
    cin >> a>> b >> c >> d >> e;


    int numeros[e+1];
    memset(numeros,0,sizeof(numeros));

    numeros[0] = 1;
    for(int i=0; i<=e;i+=a){
        numeros[i]=1;
    }

    for(int i=0; i<=e;i+=b){
        numeros[i]=1;
    }

    for(int i=0; i<=e;i+=c){
        numeros[i]=1;
    }

    for(int i=0; i<=e;i+=d){
        numeros[i]=1;
    }
    int res=0;
    for(int i=0; i<=e;i++){
        if(!numeros[i]){
            res++;
        }
    }
    cout << e - res<<endl;
    return 0;
}
