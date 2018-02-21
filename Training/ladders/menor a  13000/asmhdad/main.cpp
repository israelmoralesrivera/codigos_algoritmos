#include <bits/stdc++.h>

using namespace std;

int visitados[101],n,m,x,y,contador=1;
vector< vector<int> >g(101);

void DFS(int v){
	visitados[v]=1;
	for(int i=0;i<g[v].size();i++){
		if(!visitados[g[v][i]]){
			DFS(g[v][i]);
			contador++;
		}
	}
	cout << v << endl;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	DFS(1);
    if(n == m && contador == n){
        cout << "FHTAGN!" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}
