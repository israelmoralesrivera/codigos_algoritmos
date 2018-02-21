#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n,m;

    cin >> n >> m;
    int res=0;
    if(n >= m){
        cout << n-m<<endl;
        return 0;
    }
    while(n != m){
        if(!(m%2)){
            m= m/2;
            res++;
        }else{
            m++;
            res++;
        }
        if(n > m){
            res+= n-m;
            break;
        }
    }
    cout << res << endl;

    return 0;
}
