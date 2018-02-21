#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define dif !=

int main()
{
    string normal,inverso;
    cin >> normal >> inverso;
    if(normal.length() != inverso.length()){
        cout<< "NO"<<endl;
        return 0;
    }
    int largo = normal.length() -1;
    for(int i=0; i<normal.length();i++){
        if(normal[i] dif inverso[largo -i]){
            cout << "NO"<<endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
    return 0;
}
