#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.first<b.first;
}

int main()
{
    int n,m;
    cin >> n >> m;

    vector<pair<int, int> > grupos(m+1);
    for(int i=0; i<m+1;i++){
        grupos[i]= make_pair(0,i);
    }
    for(int i=1, aux; i<=n; i++){
        cin >> aux;
        grupos[aux]=make_pair(++grupos[aux].first,aux);
    }
    sort(grupos.begin(), grupos.end(), comp);

    int cuenta=0;
    int ultimo=0;
    int res[2][5001];
    for(int i=2; i<m+1;i++){
        cuenta += grupos[i].first - grupos[i-1].first;
        if(grupos[i-1].first== 0){}
        else{
            for(int j=0; j<grupos[i].first - grupos[i-1].first; j++){
                res[0][ultimo] = grupos[i].second;
                res[1][ultimo] = grupos[i-1].second;
                ultimo++;
            }
        }
        grupos[i].first = grupos[i].first - grupos[i-1].first;
    }
    cout << cuenta << endl;
    for(int i=0; i<ultimo;i++){
        cout << res[0][i]<<" "<<res[1][i]<<endl;
    }

    return 0;
}
