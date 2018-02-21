#include <bits/stdc++.h>

using namespace std;

int nodos, aristas, k, partida, llegada;

vector<vector<pair<int, int> > > grafo(51);

int dijsktra(int n, int x){

}

int main()
{
    int x, y, v;
    while((cin >> nodos >> aristas >> k >> partida >> llegada) && nodos){
        for(int i=0; i <aristas; i++){
            cin >> x >> y >> v;
            grafo[x].push_back(make_pair(y,v));
        }
    }

    return 0;
}
