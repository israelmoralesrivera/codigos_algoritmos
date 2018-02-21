#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int cache[21][11][156];

int dp(int n, int k, int s){
    if(s < 0 || k < 0) {
        return 0;
    }
    if(n == 0) {
        return ((s == 0 && k == 0)? 1:0);
    }

    int &res = cache[n][k][s];

    if(res == -1){
        res = dp(n - 1,k,s) + dp(n - 1,k - 1,s - n);
    }

    return res;
}

int main(){
    int n,k,s;
    memset(cache,-1,sizeof cache);

    while(true){
        cin >> n >> k >>s;
        if(n == 0){
            break;
        }

        cout << dp(n,k,s)<<endl;
    }

    return 0;
}
