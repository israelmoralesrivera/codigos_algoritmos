#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        string filas[n];
        string columas[n];
        for(int i=0; i<n;i++){
            columas[i]="";
            cin >> filas[i];
        }
        int cont=0;
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                columas[cont]+=filas[j][i];
            }
            cont++;
        }

        for(int i=0; i<n;i++){
            sort(columas[i].begin(), columas[i].end());
            sort(filas[i].begin(), filas[i].end());
        }
        int r=0;
        int c=0;
        for(int i=0; i<n;i++){
            int cont=0;
            int aux=0;
            for(int j=0; j<n;j++){
                if(i!=j){
                    if(columas[i]!=columas[j]){
                        cont++;
                    }
                    if(filas[i]!=filas[j]){
                        aux++;
                    }
                }
            }
            if(cont==n-1){
                c=i;
            }
            if(aux==n-1){
                r=i;
            }
        }
        char letra;
        for(int i=0; i<n;i++){
            if(filas[i]!=filas[r]){
                for(int j=0; j<n;j++){
                    int temp = 0;
                    for(int k=0; k<n;k++){
                        if(filas[i][j]!=filas[r][k]){
                            temp++;
                        }
                    }
                    if(temp==n){
                        letra=filas[i][j];
                        break;
                    }
                }
                break;
            }
        }
        cout << r+1 << " "<<c+1<<" "<<letra<<endl;
    }
    return 0;
}
