#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
	int n,m;
	cin >> n>>m;

	int children[2][n];
	FOR(i,0,n){
        cin >> children[0][i];
        children[1][i] = 0;
	}
	int ceros=0;
	int last=0;
	while(ceros<n){
        FOR(i,0,n){
            if(children[0][i]-m <=0 && children[1][i] == 0){
                ceros++;
                last=i+1;
                children[1][i]=1;
            }else if(children[1][i] == 0){
                children[0][i]-=m;
            }
        }
	}
	cout << last<<endl;

    return 0;
}
