#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    string primero, segundo, frase;
    cin >> primero >> segundo >> frase;

    string comp = primero + segundo;

    if(comp.length() == frase.length()){
        sort(comp.begin(), comp.end());
        sort(frase.begin(), frase.end());
        if(comp == frase){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }else{
        cout <<"NO"<<endl;
    }

    return 0;
}
