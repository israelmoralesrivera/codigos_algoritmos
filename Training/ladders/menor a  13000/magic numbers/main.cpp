#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    string entrada;
    cin >> entrada;

    if(entrada[0] != '1'){
        cout << "NO"<<endl;
        return 0;
    }

    int cuatros=0;
    for(int i=0; i<entrada.length();i++){
        if(entrada[i] != '1' && entrada[i] != '4'){
            cout <<"NO"<<endl;
            return 0;
        }else if(entrada[i] == '4'){
            cuatros++;
            if(cuatros > 2){
                cout << "NO"<<endl;
                return 0;
            }
        }
        if(entrada[i] == '1') cuatros=0;
    }
    cout << "YES"<<endl;


    return 0;
}
