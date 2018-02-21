#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int box, n;
int boxes[31][11];
int cache[31][31];

bool validos(int n, int ii , int jj){
    for(int i=0; i<n; i++){
        if(boxes[ii][i] >= boxes[jj][i]) return false;
    }
    return true;
}

int dp(int i){
    if(i == box) return 0;
    for(int j=0;j<box; j++){
        if(j != i){
            if(validos(n, j, i)){
                cache[i][j]++;
            }
        }
    }
}


int main()
{

    while(cin >> box){
        cin >> n;
        memset(cache, -1, sizeof(cache));
        for(int i=0; i<box;i++){
            for(int j=0; i<n;j++){
                cin >> boxes[i][j];
            }
            sort(boxes[i], boxes[i]+n);
        }

    }

    return 0;
}
