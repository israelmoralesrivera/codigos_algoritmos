#include <bits/stdc++.h>

using namespace std;

bool black_visited[100001];
bool white_visited[100001];

int main()
{
    int n;
    cin >> n;
    vector<vector<int > > board(n+1, vector<int>());
    for(int i=0,a,b; i<n-1;i++){
        cin >> a >> b;
        board[a].push_back(b);
        board[b].push_back(a);
    }
    stack<int> black;
    black.push(1);
    stack<int> white;
    white.push(n);

    black_visited[n]=true;
    white_visited[1]=true;

    int black_cnt=0;
    int white_cnt=0;

    while(!black.empty() || !white.empty()){
        cout << "entro"<<endl;
        vector<int> black_iteration;
        for(int j=0; j<black.size();j++){
            black_iteration.push_back(black.top());
            black.pop();
        }
        for(int i=0; i<black_iteration.size();i++){
            cout << "for de partida"<<endl;
            if(!black_visited[black_iteration[i]] && !white_visited[black_iteration[i]]|){
                black_visited[black_iteration[i]]=true;
                black_cnt++;
                cout << "entro el if"<<endl;
                for(int j=0; j<board[black_iteration[i]].size();j++){
                    cout << "sin push"<<endl;
                    black.push(board[ black_iteration[i] ][j]);
                }
            }
        }
        vector<int> white_iteration;
        for(int i=0; i<white.size();i++){
            white_iteration.push_back(white.top());
            white.pop();
        }
        for(int i=0; i<white_iteration.size();i++){
            if(!white_visited[white_iteration[i]] && !black_visited[white_iteration[i]]){
                white_visited[white_iteration[i]]=true;
                white_cnt++;
                for(int j=0; j<board[white_iteration[i]].size();j++){
                    white.push(board[ white_iteration[i] ][j]);
                }
            }
        }

    }
    cout << black_cnt << "   "<<white_cnt<<endl;

    return 0;
}
