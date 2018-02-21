#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int k;
    cin >> k;

    int meses[12];
    for(int i=0;i <12;i++){
        cin >> meses[i];
    }

    sort(meses, meses + 12);

    int suma=0;
    for(int i=11; i>=0;i--){
        suma+=meses[i];
        if(suma>=k){
            if(!k)cout << 0 <<endl;
            else cout << 12 - i<<endl;
            return 0;
        }
    }

    cout << -1 <<endl;
    return 0;
}
