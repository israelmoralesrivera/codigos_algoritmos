#include <bits/stdc++.h>

using namespace std;

#define MAXN 1300000

bool prime[MAXN];

bool isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void genPrime(){
    memset(prime, true, sizeof(prime));
    for (int i = 2; i < MAXN; i++) {
        if (prime[i]) {
            if (isPrime(i)) {
                for (int k = 2; k * i < MAXN; k++) {
                    prime[k*i] = false;
                }
            }else{
                prime[i] = false;
                continue;
            }
        }else{
            continue;
        }
    }
}


int main(){
    genPrime();
    int a,b;
    cin>>a>>b;
    while (a!=0 && b!= 0) {
        bool flag = true;
        int rang1,rang2, maxi = 0;
        for(int i = a; i <=b; i++){
            if(prime[i] && flag){
                flag = false;
                rang1 = i;
            }else if(prime[i]){
                maxi = max(i-rang1,maxi);
                rang1 = i;
            }
        }
        if(maxi == 0){
            if(isPrime(a) && isPrime(b)){
                cout << 0 << endl;
            }else{
                cout<<"NULL"<<endl;
            }

        }else{
            cout<<maxi<<endl;
        }
        cin>>a>>b;
    }

    return 0;
}
