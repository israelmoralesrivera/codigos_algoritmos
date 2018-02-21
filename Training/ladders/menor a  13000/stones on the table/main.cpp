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
    string entrada;

    cin >> n>>entrada;
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    int res=0;
    FOR(i,1,n){
        if(entrada[i] == entrada[i-1]){
            res++;
        }
    }
    cout <<res<<endl;

    return 0;
}
