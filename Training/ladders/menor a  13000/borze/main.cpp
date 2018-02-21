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

    entrada += "++";
    string res="";
    FOR(i,0,entrada.length()-2){
        if(entrada[i] == '-' && entrada[i+1] == '.'){
            res+='1';
            i++;
        }else if(entrada[i] == '-' && entrada[i+1] == '-'){
            res+='2';
            i++;
        }else{
            res+='0';
        }
    }
    cout << res <<endl;
    return 0;
}
