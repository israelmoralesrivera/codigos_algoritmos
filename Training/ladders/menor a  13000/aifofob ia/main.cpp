#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

string entrada;
int cache[6101][6101];

int DP(int l, int r){
    if( r < l ) return 0;
    if( r == l) return 0;

    if(cache[l][r] != -1) return cache[l][r];

    if(entrada[l] == entrada[r]){
        return cache[l][r] = DP(l+1, r-1);
    }
    return cache[l][r] = 1 + min(DP(l+1, r), DP(l, r-1));
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> entrada;
        memset(cache, -1 , sizeof(cache));

        cout << DP(0, entrada.length()-1)<<endl;

    }

    return 0;
}
