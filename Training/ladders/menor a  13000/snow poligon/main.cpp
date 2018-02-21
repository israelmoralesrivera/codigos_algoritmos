#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define EPS 0.00000001

const double pi = 3.14159265358979323;

double dis(double x1, double y1, double x2, double y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main()
{
	int n;
	double cx, cy;
	cin >> n >> cx >> cy;
	double puntos[n+1][2];
	for(int i=0; i<n; i++){
        cin >> puntos[i][0] >> puntos[i][1];
	}
	puntos[n][0] = puntos[0][0];
	puntos[n][1] = puntos[0][1];

	double menor = numeric_limits<double>::max();
	double mayor = -1.0;
    for(int i=1; i<=n; i++){
        double x1 = puntos[i][0];
        double y1 = puntos[i][1];
        double x2 = puntos[i-1][0];
        double y2 = puntos[i-1][1];

        mayor = max(mayor, dis(cx,cy,x1,y1));

        double a1 = y2-y1;
        double b1 = -1.0*(x2-x1);
        double c1 = -1.0*(x1*y2 + y1*x2);

        double a2 = -1.0*b1;
        double b2 = a1;
        double c2 = -1.0*cx*b1 + cy*a1;

        double xm,ym;
        if(abs(a1-b1) < EPS){
            menor =  min(menor, min(dis(x1,y1,cx,cy),dis(x2,y2,cx,cy)));
        }else if(abs(a1) < EPS && abs(b1) < EPS){
            menor =  min(menor, min(dis(x1,y1,cx,cy),dis(x2,y2,cx,cy)));
        }else{
            if(abs(a1) < EPS){
                xm = (-1.0*c2)/a2;
                ym = (-1.0*c1)/b1;
            }else if(abs(b1) < EPS){
                xm = (-1.0*c1)/a1;
                ym = (-1.0*c2)/b2;
            }else{
                xm = (-1.0*b1*c2 + b2*c1)/(-1.0*a1*b2 + a2*b1);
                ym = (-1.0*c1 + (-1.0)*a1*xm)/(b1);
            }
            if(dis(cx,cy,xm,ym) != 0){
                menor = min(menor, dis(cx,cy,xm,ym));
            }
        }
    }
    cout << "menor:  "<<menor<<"  mayor:  "<<mayor<<endl;
    double area_menor = pi*menor*menor;
    double area_mayor = pi*mayor*mayor;
    double res = area_mayor - area_menor;
    printf("%.9f", res);


    return 0;
}
