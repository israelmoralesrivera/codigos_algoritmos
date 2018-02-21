#include <bits/stdc++.h>

#define RED 2
#define ORANGE 1
#define GREEN 0
#define TAM 26


using namespace std;
typedef vector<vector<int> > mi;

int visited[TAM];
stack<int> order;

bool topo_sort(int v, mi graph){
    if(visited[v] == RED) return true;
    bool ans = true;
    for(int i = 0; i < graph[v].size() && ans; i++){
        if(visited[graph[v][i]] == GREEN){
            visited[graph[v][i]] = ORANGE;
            ans = topo_sort(graph[v][i], graph);
        }else if(visited[graph[v][i]] == RED) continue;
        else return false;
    }
    visited[v] = RED;
    order.push(v);
    return ans;
}


int main()
{
    mi grafo = vector<vector<int> >(26, vector<int>());
    int n;
    cin >> n;
    int pos[26];
    memset(pos, 0 , sizeof(pos));

    string primero, otro;
    cin >> primero;
    pos[primero[0] - 'a'] = 1;
    for(int i=1; i < n; i++){
        cin >> otro;
        bool flag = false;
        for(int j=0; j< (primero.length()<otro.length()? primero.length():otro.length()); j++){
            if(otro[j] != primero[j]){
                grafo[primero[j]- 'a'].push_back(otro[j]-'a');
                pos[otro[j] - 'a']=1;
                flag= true;
                break;
            }
        }
        if(!flag && (primero.length() > otro.length())){
            cout << "Impossible"<<endl;
            return 0;
        }
        primero = otro;
    }
    for(int i=0; i<26; i++){
        if(!pos[i]){
            if(!topo_sort(i,grafo)){
                cout << "Impossible" << endl;
                return 0;
            }
        }
    }
    for(int i=0; i<26; i++){
        if(pos[i]){
            if(!topo_sort(i,grafo)){
                cout << "Impossible" << endl;
                return 0;
            }
        }
    }

    while(!order.empty()){
        cout << (char)(order.top()+'a');
        order.pop();
    }
    cout << endl;

    return 0;
}

