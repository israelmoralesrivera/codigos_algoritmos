#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int cont=0;
/*
int atras[200010], cont=0;

void kmpPreprocess(string patron){
    int m = patron.length();
    int i=0, j=-1;
    atras[i]=j;
    while (i<m)
    {
        while (j>=0 && patron[i]!=patron[j]) j=atras[j];
        i++; j++;
        atras[i]=j;
    }
}
void kmpSearch(string frase, string patron){
    int n = frase.length();
    int m = patron.length();
    int i=0, j=0;
    while (i<n)
    {
        while (j>=0 && frase[i]!=patron[j]) j=atras[j];
        i++; j++;
        if (j==m)
        {
            cont++;
            j=atras[j];
        }
    }
}
*/
vector<int> computePrefix(string pat){
    int m = pat.size();
    vector<int> longestPrefix(m);
    for(int i = 1, k = 0; i < m; i++){
        while(k > 0 && pat[k] != pat[i]){
            k = longestPrefix[k - 1];
        }
        if(pat[i] == pat[k]){
            longestPrefix[i] = ++k;
        }
        else{
            longestPrefix[i] = k;
        }
    }
    return longestPrefix;
}
void KMP(string str,string pat){
    int n = str.size();
    int m = pat.size();
    vector<int> longestPrefix = computePrefix(pat);
    for(int i = 0, k = 0; i < n; i++){
        while(k > 0 && pat[k] != str[i]){
            k = longestPrefix[k - 1];
        }
        if(str[i] == pat[k]){
            k++;
        }
        if(k == m){
            cont++;
            //cout << cont << " "<<i<<endl;
            k = 0;
        }
    }
}

int main()
{
    string algo;
    string frase;
    cin >> frase;

    int res=frase.length();
    int largo = frase.length();
    for(int i=0; i<largo;i++){
        for(int j=1;j<largo-i+1;j++){
            algo = frase.substr(i, j);
            KMP(frase, algo);
            int otro = algo.length();
            res = min(res, largo - (otro * cont) + cont + otro);
            cont = 0;
        }
    }
    cout << res << endl;

    return 0;
}
