#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
	int n,m,l;
	int a,b,c;
	cin >> n >> m >>l;

	FOR(i,1,n+1){
	    if(n%i==0){
            b=i;
            a=n/b;
            if(m%b==0){
                c=m/b;
                if(a*c==l){
                    int res= a*4 + b*4 +c*4;
                    cout << res<<endl;
                }
            }
	    }
	}

    return 0;
}
