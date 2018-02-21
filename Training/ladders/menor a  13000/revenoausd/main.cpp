#include <bits/stdc++.h>

using namespace std;

int b[22][22];
int n, m;
void floyds()
{
    int i, j, k;
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
}
int main()
{

    cin >> n >>m;
    int i=1;
    while(!(n == 0 && m == 0)){
        memset(b, 0, sizeof(b));
        string nombres[n];
        for (int j = 0; j < n; j++){
            cin>>nombres[j];
        }
        int x,y, aux;
        for (int j = 0; j < m; j++){
            cin>> x >> y >> aux;
            b[x-1][y-1] = aux;
            b[y-1][x-1] = aux;
        }
        floyds();
        int ans=numeric_limits<int>::max();
        int res=0;
        for (int j = 0; j < n; j++){
            aux=0;
            for (int l = 0; l < n; l++){
                aux+=b[j][l];
            }
            if(ans > aux){
                ans = aux;
                res= j;
            }
        }

        cout << "Case #"<<i<<" : "<<nombres[res]<<endl;
        i++;
        cin >> n >>m;
    }
    return 0;
}
