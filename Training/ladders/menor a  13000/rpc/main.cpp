#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

typedef vector<int> vi;

class DisjointSet{

private:
  int n;
  vi p, r;
public:
  DisjointSet(int _n){
    n = _n+1;
    r.assign(n, 0);
    p.assign(n, 0);
    for(int i = 0; i < n; ++i) p[i] = i;
  }
  int find(int v){
    return p[v] == v ? v:p[v] = find(p[v]);
  }
  void joint(int u, int v){
    u = find(u), v = find(v);
    if(u != v){
      --n;
      if(r[u] >= r[v]) swap(u, v);
      p[u] = v;
      p[v] += p[u];
      if(r[u] == r[v]) ++r[v];
    }
  }
  int tam(){
    return n;
  }
};

int main(){
  string a, edge;
  cin >> a;
  while(true){
    DisjointSet ds(a[0]-'A');
    bool flag = cin >> edge;
    while(flag && edge.length() == 2){
      ds.joint(edge[0]-'A', edge[1]-'A');
      flag = cin >> edge;
    }
    printf("%d\n", ds.tam());
    if(edge.length() == 1) a = edge;
    if(!flag) break;
  }
  return 0;
}

