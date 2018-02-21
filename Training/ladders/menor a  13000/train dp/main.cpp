#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;



int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b;
        scanf("%d%d" , &a, &b);
        int suma=0;
        int numeros[a];
        for(int i=0; i<a;i++){
            scanf("%d", numeros + i);
        }
        int est = 0;
        sort(numeros, numeros + a);
        for(int i=0;i<a;i++){
            if(suma + numeros[i] <= b){
                suma+=numeros[i];
                est++;
            }else{
                break;
            }
        }
        printf("%d %d\n", suma, est);
    }

    return 0;
}
