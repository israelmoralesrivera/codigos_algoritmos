#include <bits/stdc++.h>

using namespace std;

int numeros[100001];
int memoria[100001];



int main(){

    memset(numeros, 0, sizeof numeros);
    memset(memoria, -1, sizeof memoria);
    int n;
    cin >> n;
    int aux;
    for(int i=0; i<n; i´++){
        cin >> aux;
        numeros[aux++];
    }

    return 0;
}
