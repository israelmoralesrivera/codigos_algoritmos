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
    cin >>n;
    int a,b;
    int res=0,fin=0;
    FOR(i,0,n){
        cin >> a >> b;

        res =  res - a + b;
        fin = max(fin, res);
    }
    cout << fin<<endl;

    return 0;
}
