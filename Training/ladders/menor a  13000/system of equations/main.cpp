#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n,m;
    cin >> n>> m;

    int mayor = n>m? n:m;
    int menor = n<m? n:m;

    int res=0;
    for(int i=0; i<=menor;i++){
        for(int j=0; j<=mayor;j++){
            if((j*j + i == mayor) && (j + i*i==menor)) res++;
        }
    }

    cout << res << endl;

    return 0;
}
