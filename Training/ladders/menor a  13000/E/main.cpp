#include <bits/stdc++.h>

using namespace std;

int elevar(int n, int res){
    if(n == 0){
        return res;
    }else{
        return elevar(n-1, 10*res);
    }
}

int numero(string in){
    int res=0;
    if(in[0] == '-'){
        for(int i=in.length()-1; i>=1 ; i--){
            res+= ((in[i]-'0') * elevar(in.length() - i -1, 1));
        }
        res*=-1;
    }else{
        for(int i=in.length()-1; i>=0 ; i--){
            res+= ((in[i]-'0') * elevar(in.length() - i - 1, 1));
        }
    }

    return res;
}

bool comp(string a, string b){
    string ca = a;
    string cb = b;
    for(int i=0; i<a.length();i++){
        ca[i] = tolower(ca[i]);
    }
    for(int i=0; i<b.length();i++){
        cb[i] = tolower(cb[i]);
    }
    vector<string> w;
    w.push_back(ca);
    w.push_back(cb);
    sort(w.begin(), w.end());
    if(w[0] == ca){
        return true;
    }else{
        return false;
    }
}


int main()
{
    string entrada;

    getline(cin, entrada);
    while(entrada != "."){

        vector<string> palabras;
        vector<int> numeros;

        int pasada=0;
        string aux="";
        string guia="";
        for(int i=0; i<entrada.length(); i++){
            if(entrada[i] == ','){
                aux = entrada.substr(pasada,abs(i-pasada));
                if(isdigit(entrada[i-1])){
                    numeros.push_back(numero(aux));
                    guia+="1";
                }else{
                    palabras.push_back(aux);
                    guia+="0";
                }
                pasada= i + 2;
            }else if(entrada[i] == '.'){
                aux = entrada.substr(pasada,abs(i-pasada));
                if(isdigit(entrada[i-1])){
                    numeros.push_back(numero(aux));
                    guia+="1";
                }else{
                    palabras.push_back(aux);
                    guia+="0";
                }
            }
        }
        sort(numeros.begin(), numeros.end());
        sort(palabras.begin(), palabras.end(), comp);
        /*
        for(int i=0; i<palabras.size(); i++){
            cout << palabras[i]<<endl;
        }
        cout << "numeros"<<endl;
        for(int i=0; i<numeros.size(); i++){
            cout << numeros[i]<<endl;
        }
        */
        int total = guia.length();

        //cout << guia << "  "<<total<<endl;
        int n=0;
        int p=0;
        for(int i=0; i<total-1;i++){
            if(guia[i]== '1'){
                cout << numeros[n]<<", ";
                n++;
            }else{
                cout <<palabras[p]<<", ";
                p++;
            }
        }
        if(guia[total-1]== '1'){
            cout << numeros[n]<<"."<<endl;
            n++;
        }else{
            cout <<palabras[p]<<"."<<endl;
            p++;
        }

        getline(cin, entrada);
    }
    return 0;
}
