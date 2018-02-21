#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n,l,r;
    cin >> n >> l >>r;

    int res=n;
    if(n-r > l){
        cout << r+1<<endl;
    }else{
        cout << n-l<<endl;
    }

    return 0;
}
