#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    string entrada;
    cin >> entrada;
    int cont=0;
    FOR(i,0,entrada.length()){
        if(entrada[i]-'0' == 4 || entrada[i]-'0' == 7){
            cont++;
        }
    }
    if(cont == 4 || cont == 7){
        cout << "YES"<<endl;
    }else{
        cout << "NO"<<endl;
    }
    return 0;
}
