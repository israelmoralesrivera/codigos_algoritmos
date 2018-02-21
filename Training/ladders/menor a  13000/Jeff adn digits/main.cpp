#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n;
    cin >> n;

    int ceros=0,cincos=0, aux;

    for(int i=0; i<n; i++){
        cin >> aux;
        if(aux == 0){
            ceros++;
        }else{
            cincos++;
        }
    }
    if(!cincos){
        cout << 0<<endl;
    }else if(!ceros){
        cout << -1<<endl;
    }else{
        while(cincos){
            if((cincos*5)%9 == 0){
                for(int i=0; i<cincos; i++){
                    cout << 5;
                }
                for(int i=0; i<ceros; i++){
                    cout << 0;
                }
                cout << endl;
                return 0;
            }else{
                cincos--;
            }
        }
        if(!cincos){
            cout << 0<<endl;
        }
    }


    return 0;
}
