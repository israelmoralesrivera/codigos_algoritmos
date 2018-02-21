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

    int mayusculas=0;
    FOR(i,0,entrada.length()){
        if(entrada[i] < 96){
            mayusculas++;
        }
    }
    if(mayusculas>entrada.length()/2){
        FOR(i,0,entrada.length()){
            entrada[i] = toupper(entrada[i]);
        }
    }else{
        FOR(i,0,entrada.length()){
            entrada[i] =tolower(entrada[i]);
        }
    }
    cout << entrada<<endl;
    return 0;
}
