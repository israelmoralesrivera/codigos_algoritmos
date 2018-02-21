#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	int days[7];
	FOR(i,0,7){
        cin >> days[i];
	}
	bool flag=true;
	int last=0;
	while(flag){
        FOR(i,0,7){
            n-=days[i];
            if(n<=0){
                last=i+1;
                flag=false;
                break;
            }
        }
	}
	cout << last<<endl;

    return 0;
}
