#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ull n,m;
    cin >> n;
    ull numeros[n+1];
    ull aux;
    FOR(i,1,n+1){
        cin >> aux;
        numeros[aux] = i;
    }
    cin >> m;

    ull uno=0, dos=0;
    FOR(i,0,m){
        cin >> aux;
        uno+= numeros[aux];
        dos+= n+1-numeros[aux];
    }

    cout << uno <<" "<<dos<<endl;

    return 0;
}
