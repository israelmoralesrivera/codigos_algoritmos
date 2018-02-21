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
    int suma=0;
    FOR(i,0,n){
        int aux;
        cin >> aux;
        suma+=aux;
    }
    double res = (double)suma / (double)n;
    cout << fixed;
    cout << setprecision(8)<<res;
    return 0;
}
