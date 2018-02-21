#include <bits/stdc++.h>

using namespace std;

int main() {

    int l,o,s,t;
    cin >> l >> o >> s >>t;

    int resultado=0;
    //paso 1
    int minimo = min(t/2, min(l,s));
    if(minimo == t/2){
        resultado += t/2;
        l -= t/2;
        s -= t/2;
        t = 0;
    }else if(minimo == s){
        resultado += s;
        l -= s;
        t -= s*2;
        s = 0;
    }else if(minimo == l){
        resultado += l;
        t -= 2*s;
        s -= l;
        l = 0;
    }
    //paso 2
    minimo = min(s,l);

    if(minimo == s){
        resultado += s/2;
        l = l - (s/2)*2;
        s = 0;
    }else{
        resultado += l/2;
        s = s - (l/2)*2;
        l = 0;
    }

    //paso 3
    minimo = min(l,o);
    if(minimo == o){
        resultado+= o/2;
        l = l - (o/2)*2;
        o=0;
    }else{
        resultado += l/2;
        o = o - (l/2)*2;
        l=0;
    }

    //paso 4
    resultado+=t/4;
    resultado+=l/4;
    resultado+=o/4;

    cout << resultado << endl;

    return 0;
}

