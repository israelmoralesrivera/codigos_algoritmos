#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n,m;
    cin >> n >>m;

    int res=0;
    int numeros[n];
    for(int i=0;i<n;i++){
        cin >> numeros[i];
    }

    sort(numeros, numeros + n);
    for(int i=0;i<n && m; i++){
        if(numeros[i] < 0){
            res+=abs(numeros[i]);
            m--;
        }
    }

    cout << res<<endl;
    return 0;
}
