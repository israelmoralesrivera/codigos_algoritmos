#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int matriz[101][101];
int res;
int n, m;
int ultimo=0;
void buscar(int x){
    int maximo=-1;
    int pos=-1;
    for(int i=0; i<n; i++){
        if(matriz[x][i] > maximo){
            maximo = matriz[x][i];
            pos = i;
        }
    }
    if(pos == -1  || maximo == -1){
        ultimo=x;
        return;
    }
    res+=maximo;
    buscar(pos);
}

int main()
{
    int casos;
    cin >> casos;
    for(int k=1; k<=casos; k++){
        memset(matriz, -1, sizeof(matriz));
        res=0;
        cin  >> n >> m;
        int points[n];
        for(int i=0; i<n; i++){
            cin >> points[i];
        }
        int a,b;
        for(int i=0; i<m;i++){
            cin >> a>>b;
            matriz[a][b] = points[b];
        }
        buscar(0);
        cout << "Case "<<k<<": "<<res <<" "<<ultimo<< endl;
    }
    return 0;
}
