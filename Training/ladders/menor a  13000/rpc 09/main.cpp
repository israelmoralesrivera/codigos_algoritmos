#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    while(cin >> n){
        cin >> k;

        int unos=0;
        int maximo = 0;
        long long copia=n;
        while(copia){
            if(copia & 1){
                unos++;
                maximo = max(maximo, unos);
                copia = copia>>1;
            }else{
                maximo = max(maximo, unos);
                unos=0;
                copia = copia>>1;
            }
        }
        if(maximo>=k){
            cout << n<<endl;
        }else{
            long long res=0;
            for(int i=0; i<k;i++){
                res = res<<1;
                res |= 1;
            }
            long long ans = n | res;
            long long temp = ans;
            temp = temp >> k;
            unos=0;
            while(temp & 1){
                unos++;
                temp>>=1;
            }
            temp = 0;
            for(int i=0; i<unos;i++){
                temp = temp<<1;
                temp |= 1;
            }
            ans = ans^temp;

            cout << ans<<endl;
        }
    }
    return 0;
}
