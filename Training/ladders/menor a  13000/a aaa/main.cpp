#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int n;
    double a ,b;
    cin  >> n >>a >>b;
    double mesas[n];
    for(int i=0; i< n; i++){
        cin  >> mesas[i];
    }
    int res=0;
    for(int i=0; i<n; i++){
        if(mesas[i] == 1.0 && a != 0.0){
            a = a - 1.0;
        }else if(mesas[i] == 2.0 && b >= 1.0){
            b = b - 1.0;
        }else if(mesas[i] == 1.0 && a == 0.0 && b!= 0.0){
            b = b - 0.5;
        }else if(mesas[i] == 2.0 && b < 1.0){
            res+=2;
        }else if(mesas[i] == 1.0 && b == 0.0){
            res++;
        }
    }
    cout << res << endl;

    return 0;
}
