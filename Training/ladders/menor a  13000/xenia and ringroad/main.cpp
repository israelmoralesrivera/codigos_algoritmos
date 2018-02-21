#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    ll n,m;

    cin >> n >> m;

    ll res=0, actual=1, aux;
    for(int i=0; i<m; i++){
        cin >> aux;
        if(aux == actual){
            continue;
        }else if(aux > actual){
            res+= aux-actual;
            actual=aux;
        }else if(aux < actual){
            res+=n-actual + aux;
            actual = aux;
        }
    }
    cout <<res<<endl;

    return 0;
}
