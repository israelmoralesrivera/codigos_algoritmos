#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int casos, n, p;
    cin >> casos;
    while(casos--){
        cin  >> n >> p;
        int algo = 2*n + p;
        int saltos=1;
        while(algo){
            for(int i=1; i<=n; i++){
                cout << i<< " "<< (i + saltos-1)%n+1<<endl;
                algo--;
                if(!algo)break;
            }
            saltos++;
        }

    }

    return 0;
}
