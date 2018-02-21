#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int cups[n][2];
    int derechos=0, izquierdos=0;
    FOR(i,0,n){
        cin >> cups[i][0] >> cups[i][1];
        if(cups[i][0] == 1){
            derechos++;
        }
        if(cups[i][1] == 1){
            izquierdos++;
        }
    }
    int res=0;
    if(n - derechos> derechos){
        res+=derechos;
    }else{
        res+= n-derechos;
    }
    if(n-izquierdos>izquierdos){
        res+=izquierdos;
    }else{
        res+=n-izquierdos;
    }
    cout << res<<endl;

    return 0;
}
