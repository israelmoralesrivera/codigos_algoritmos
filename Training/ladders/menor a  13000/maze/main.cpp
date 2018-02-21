#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int maze[502][502];
int visitados[502][502];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int k;
int maximo=1;

void dfs(int x, int y, int n, int m){

    visitados[x][y] = 1;

    for(int i=0;i < 4;i++){
        if(maze[ x + dx[i] ][ y + dy[i] ] == 1 && !visitados[ x + dx[i] ][ y + dy[i] ]){
            maze[ x + dx[i] ][ y + dy[i] ] = maze[x][y] + 1;
            dfs( x + dx[i], y + dy[i], n, m);
            maximo = max(maximo, maze[ x + dx[i] ][ y + dy[i] ]);
        }
    }
    if(k){
        maze[x][y] = -1;
        k--;
    }

}
void _init_(){
	memset(maze, 0 ,sizeof(maze));
	memset(visitados, 0, sizeof(visitados));
}

int main()
{
	int n,m;
	cin >> n >> m >> k;

	_init_();

	string aux;
	int x, y;
	for(int i=0; i<n;i++){
        cin >> aux;
        for(int j=0;j<m;j++){
            if(aux[j] == '.'){
                maze[i+1][j+1] = 1;
                x = i+1;
                y = j+1;
            }
        }
	}
	dfs(x, y, n+2, m+2);
	for(int i=1; i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(maze[i][j]==0){
                cout<<"#";
            }else if(maze[i][j] == -1){
                cout<<"X";
            }else{
                cout<<".";
            }
        }
        cout << endl;
	}

    return 0;
}
