#include <bits/stdc++.h>

using namespace std;

int n,m;
int matriz[12][12];
int visitados[12][12];

int main()
{
    cin >> n >> m;
    memset(visitados, 0 , sizeof visitados);
    memset(matriz, 0 , sizeof matriz);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            cin >> matriz[i][j];
        }
    }
    int res = 0;
    int cont=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            if(!visitados[i][j]){
                dfs(i,j);
            }
        }
    }


    return 0;
}
