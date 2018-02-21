#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    string primero, segundo;
    cin >> primero >> segundo;
    string resultado="";
    FOR(i,0,primero.length()){
        if(primero[i] == segundo[i]){
            resultado+="0";
        }else{
            resultado+="1";
        }
    }
    cout << resultado<<endl;

    return 0;
}
