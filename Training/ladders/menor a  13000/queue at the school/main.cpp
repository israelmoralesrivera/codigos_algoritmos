#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int n,t;
    cin >> n >> t;
    string entrada;
    cin >> entrada;

    FOR(i,0,t){
        FOR(j,0,n-1){
            if(entrada[j]=='B' && entrada[j+1]=='G'){
                entrada[j]='G';
                entrada[j+1]='B';
                j++;
            }
        }
    }
    cout << entrada<<endl;

    return 0;
}
