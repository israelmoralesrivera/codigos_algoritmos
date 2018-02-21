#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int primos[256];
    memset(primos, 0, sizeof primos);
    for(int i=2; i<256;i++){
        int j=i;
        while(j<256-i){
            j+=i;
            primos[j]=1;
        }
    }
    /*
    for(int i=2; i<256;i++){
       if(!primos[i]) cout << i<<" ";
    }
    */
    cout << endl;
    map<char, int> cercanos;
    cercanos['y'] = (int)('q');
    cercanos['z'] = (int)('q');
    cercanos['A'] = (int)('C');
    cercanos['B'] = (int)('C');
    cercanos['C'] = (int)('C');
    cercanos['D'] = (int)('C');
    cercanos['E'] = (int)('C');
    string entrada;
    int largo;
    while(t--){
        cin >> largo;
        cin >> entrada;

        for(int i=0; i<largo; i++){
            if(cercanos[entrada[i]]){
                cout << (char)cercanos[entrada[i]];
                //cout << "a : " << cercanos[entrada[i]] <<endl;
            }else{
                if(!primos[entrada[i]]){
                    cercanos[entrada[i]] = entrada[i];
                    //cout << "b : " << cercanos[entrada[i]] <<endl;
                    cout <<(char)cercanos[entrada[i]];
                }else{
                    int arriba = entrada[i];
                    int abajo = entrada[i];

                    while(primos[arriba]){
                        arriba++;
                    }
                    while(primos[abajo]){
                        abajo--;
                    }
                    if(abs(entrada[i] - arriba) < abs(entrada[i] - abajo)){
                        cercanos[entrada[i]] = arriba;
                    }else{
                        cercanos[entrada[i]] = abajo;
                    }
                    cout << (char)cercanos[entrada[i]];
                    //cout << "c : " << cercanos[entrada[i]] <<endl;
                }
            }
        }
        cout << endl;

    }

    return 0;
}
