#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

ll factorial(ll x){
    if(x ==1) return 1;
    return x*factorial(x-1);
}

int main()
{
    ll  n,k, aux;
    cin >> n >>k;
    ll cont=0;
    while(n--){
        cin >>aux;
        if(!(aux%2)){
            cont++;
        }
    }
    if(k>cont){
        cout << 0<<endl;
    }else if(k==cont){
        cout << 1 <<endl;
    }else{
        cout << factorial(cont)/(factorial(k)*factorial(cont-k))<<endl;
    }

    return 0;
}
