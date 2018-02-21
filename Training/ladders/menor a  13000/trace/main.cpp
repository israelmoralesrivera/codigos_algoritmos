#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const double pi = 3.1415926536;

int main()
{
	int n;
	cin >> n;

	int c[n];
	for(int i=0; i<n; i++){
        cin >> c[i];
	}
	sort(c, c+n);
	double ans = 0.0;
	int cont = 0;
	int anterior = 1001;
	for(int i=n-1; i>=0; i--){
        if(c[i]!= anterior){
            if(cont%2 == 0){
                ans += pi*((double)(c[i]*c[i]));
                cont++;
                anterior = c[i];
            }else{
                ans -= pi*((double)(c[i]*c[i]));
                cont++;
                anterior = c[i];
            }
        }
	}
	printf("%.6f", ans);

    return 0;
}
