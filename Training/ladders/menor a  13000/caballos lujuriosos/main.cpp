#include <bits/stdc++.h>

#include <conio.h>
#include <windows.h>

using namespace std;


typedef unsigned long long ull;
typedef long long ll;

int main()
{
	int x,y;
	cin >> x >> y;
	int ans=0;
	int cont=0;
	int a=0,b=0;
	int aux=0;
	if( x == 0){
        if(y == 0){
            cout << 0 << endl;
            return 0;
        }
	}
	while(1){
        if(aux == 0){
            cont++;
            for(int i=1; i<=cont;i++){
                a++;
                if(a == x && b ==y){
                    cout << ans <<endl;
                    return 0;
                }
            }
            aux++;
        }else if(aux==1){
            for(int i=1; i<=cont;i++){
                b++;
                if(a == x && b ==y){
                    cout << ans <<endl;
                    return 0;
                }
            }
            aux++;
        }else if(aux==2){
            cont++;
            for(int i=1; i<=cont;i++){
                a--;
                if(a == x && b ==y){
                    cout << ans <<endl;
                    return 0;
                }
            }
            aux++;
        }else if(aux==3){
            for(int i=1; i<=cont;i++){
                b--;
                if(a == x && b ==y){
                    cout << ans <<endl;
                    return 0;
                }
            }
            aux=0;
        }
        ans++;
	}

    return 0;
}
