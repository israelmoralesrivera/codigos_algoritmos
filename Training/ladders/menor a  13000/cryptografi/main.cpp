#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    string mensaje, clave;

    cin >> mensaje;
    cin >> clave;

    int largo = mensaje.length();
    int lc = clave.length();

    string resultado = "";
    int cont = 0;
    while(largo--){
        stringstream ss;
        string s;
        char c;
        if((mensaje[cont] - 65 - (clave[cont] - 65)) < 0 ){
            c = 26+(mensaje[cont] - 65 - (clave[cont] - 65)) + 65;
        }else{
            c = (mensaje[cont] - 65 - (clave[cont] - 65)) + 65;
        }
        ss << c;
        ss >> s;
        resultado+= s;
        cont ++;
        clave += s;
    }

    cout << resultado << endl;

    return 0;
}
