#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int g[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> g[i][j];
        }
    }
    int p[5] = {0,1,2,3,4};
    int mayor = 0;
    do{
        int suma = g[p[0]][p[1]] + g[p[1]][p[0]] + g[p[2]][p[3]] + g[p[3]][p[2]]
                 + g[p[2]][p[1]] + g[p[1]][p[2]] + g[p[4]][p[3]] + g[p[3]][p[4]]
                 + g[p[2]][p[3]] + g[p[3]][p[2]]
                 + g[p[4]][p[3]] + g[p[3]][p[4]];
        mayor  = max(mayor, suma);
    }while(next_permutation(p, p + 5));

    cout << mayor << endl;

    return 0;
}
