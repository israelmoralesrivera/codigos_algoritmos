#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;



bool is_prime(int m){

    FOR(i,2,m){
        if(!(m%i)){
            return false;
        }
    }
    return true;
}


int main()
{
    int n,m;
    cin >> n>> m;
    if(m-1 == n && n!=2){
        cout << "NO"<<endl;
        return 0;
    }
    if(is_prime(m)){
        FOR(i,n+1,m){
            if(is_prime(i)){
                cout << "NO"<<endl;
                return 0;
            }
        }
        cout << "YES"<<endl;
    }else{
        cout << "NO"<<endl;
    }
    return 0;
}
