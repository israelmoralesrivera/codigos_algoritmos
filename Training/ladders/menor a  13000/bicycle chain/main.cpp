#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n,m;
    cin >> n;
    int ai[n];
    for(int i=0; i < n; i++){
        cin >> ai[i];
    }
    cin >> m;
    int bi[m];
    for(int i=0; i < m; i++){
        cin >> bi[i];
    }
    int mayor=0;
    int res=0;
    for(int i=m-1; i >= 0; i--){
        for(int j=0; j<n; j++){
            if(bi[i]%ai[j] == 0){
                if(bi[i]/ai[j] > mayor){
                    res=1;
                    mayor = bi[i]/ai[j];
                }else if(bi[i]/ai[j] == mayor){
                    res++;
                }
            }
        }
    }
    cout << res <<endl;

    return 0;
}
