#include <bits/stdc++.h>

using namespace std;

int matriz[2][2] = {{1,1},{1,0}};
int estatica[2][2] = {{1,1},{1,0}};
/*
void multiplicar(){
}

void expo(int n){
    if(n==0){
        return;
    }else if(n%2 == 0){
        multiplicar();
        expo(n/2);
    }else{

    }
}
*/
int a[1] = {2};

int expo(int n){
    if(n==0){
        return 1;
    }else if(n%2 == 0){
        a[0]*a[0];
        return expo(n/2);
    }else{
        return
    }
}

int main()
{
    int n;
    cin >> n;
    expo(n);
    cout << a[0]<<endl;
    /*
    do{
        cout << matriz[0][0] <<" "<< matriz[0][1]<<endl;
        cout << matriz[1][0] <<" "<< matriz[1][1]<<endl;
        cout <<"________________________________"<<endl;

        int a = matriz[0][0];
        int b = matriz[0][1];
        int c = matriz[1][0];
        int d = matriz[1][1];

        matriz[0][0] = a*estatica[0][0] + b*estatica[1][0];
        matriz[0][1] = a*estatica[0][1] + b*estatica[1][1];
        matriz[1][0] = c*estatica[0][0] + d*estatica[1][0];
        matriz[1][1] = c*estatica[0][1] + d*estatica[1][1];

    }while(n--);
    */




    return 0;
}
