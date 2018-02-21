#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
	int n,t;
	cin >> n >> t;

	int numeros[n];
	vector<int> visitadas;
	for(int i=0; i<n-1;i++){
        cin >> numeros[i];
	}
	visitadas.push_back(1);
	int actual=numeros[0];
	while(actual<= n){
        visitadas.push_back(actual);
        actual+=numeros[actual];
	}
	for(int i=0; i< visitadas.size(); i++){
        if(visitadas[i] + 1== t){
            cout << "YES"<<endl;
            return 0;
        }
	}
	cout << "NO"<<endl;



    return 0;
}
