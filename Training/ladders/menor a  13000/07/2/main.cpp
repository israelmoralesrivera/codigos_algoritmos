#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ull factorial(ull n){
    if(n == 1) return 1;
    return n* factorial(n-1);
}

int main()
{
    ull a, b;
    cin >> a>>b;
    if(a == 1 || b == 1){
        cout << 1 <<endl;
    }else{
        cout << factorial(a<b? a:b);
    }

    return 0;
}
