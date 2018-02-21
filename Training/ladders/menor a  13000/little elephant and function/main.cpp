#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int n;
    cin >> n;

    if(n == 1){
        cout << n <<endl;
    }else{
        cout << n <<" ";
        for(int i=1; i<n;i++){
            cout << i<<" ";
        }
        cout <<endl;
    }


    return 0;
}
