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

    string t;
    int algo[7] = {0,0,0,0,0,0,0};
    for(int i = 0; i < n; i++){
        cin>>t;
        for(int j=0;j < 7; j++)
            if(t[j] == '1')
                algo[j]++;
    }

    sort(algo, algo + 7);
    cout<<algo[6];

    return 0;
}
