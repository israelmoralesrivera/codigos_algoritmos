#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int n;
int numeros[1001];
int cache[1001][1001];
int maximo =0, ultimo=-1;

int dp(int l, int r, int segundo){
    if(l > r) return 0;
    if((l+r)%2 == 0){
        if(numeros[r] <= numeros[l]){
            segundo+= numeros[l];
            return dp(l+1, r, segundo);
        }else{
            segundo+= numeros[r];
            return dp(l, r-1, segundo);
        }
    }
    if(cache[l][r] != -1) return cache[l][r];
    cout << segundo << endl;
    cache[l][r] = max(numeros[l] + dp(l+1, r, segundo), numeros[r] + dp(l, r-1, segundo));
    if(cache[l][r] >= maximo){
        ultimo = segundo;
        maximo = cache[l][r];
    }
    return cache[l][r];

}


int main()
{
    n=1;
    while(n != 0){
        cin >> n;
        for(int i=0; i<n;i++){
            cin >> numeros[i];
        }
        memset(cache, -1, sizeof(cache));

        int algo = dp(0 , n-1, 0);

        for(int i=0; i< 8; i++){
            for(int j=0; j<8;j++){
                cout << cache[i][j] << " ";
            }
            cout << endl;
        }
        cout << maximo <<" "<<ultimo<<endl;
    }

    return 0;
}
