#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    int c[n];
    map<int, set<int> > mapa;
    for(int i = 0; i < n; i++){
        cin >> c[i];
        mapa[c[i]];
    }
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        if(c[a-1] != c[b-1]){
            mapa[c[a-1]].insert(c[b-1]);
            mapa[c[b-1]].insert(c[a-1]);
        }
    }
    int maxi = -1;
    int color = 0;
    for(map<int, set<int> >::iterator it = mapa.begin(); it != mapa.end(); ++it){
        if(maxi < (int)(it->second.size())){
            color = it->first;
            maxi = (int)it->second.size();
        }
    }
    printf("%d\n", color);

    return 0;
}
