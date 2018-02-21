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
	int soldiers[n];
	FOR(i,0,n){
        cin >> soldiers[i];
	}
    int menor = abs(soldiers[0]-soldiers[n-1]);
    int a=0,b=n-1;
    FOR(i,0,n-1){
        if(abs(soldiers[i]-soldiers[i+1])<menor){
            menor = abs(soldiers[i]-soldiers[i+1]);
            a=i,b=i+1;
        }
    }
    cout << a+1 <<" "<<b+1<<endl;
    return 0;
}
