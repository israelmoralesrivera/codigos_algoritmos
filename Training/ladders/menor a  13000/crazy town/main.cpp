#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

double sx,sy,lx,ly,n,a,b,c;

struct Point
{
    double x;
    double y;
};

bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;

    return false;
}

double orientation(Point p, Point q, Point r)
{
    double val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0.0;
    return (val > 0)? 1.0: 2.0;
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    double o1 = orientation(p1, q1, p2);
    double o2 = orientation(p1, q1, q2);
    double o3 = orientation(p2, q2, p1);
    double o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return true;

    if (o1 == 0.0 && onSegment(p1, p2, q1)) return true;

    if (o2 == 0.0 && onSegment(p1, q2, q1)) return true;

    if (o3 == 0.0 && onSegment(p2, p1, q2)) return true;

    if (o4 == 0.0 && onSegment(p2, q1, q2)) return true;

    return false;
}


int main()
{
    cin >> sx >> sy;
    cin >> lx >> ly;

	struct Point partida = {sx, sy};
	struct Point llegada = {lx, ly};

	struct Point uno = {0, 1};
    struct Point dos = {0, 0};
	cin >> n;
	int cont = 0;
	for(int i=0; i<n; i++){
        cin >>a >> b >> c;
        if(a == 0){
            uno = {-1000001.0, (c*-1.0)/b};
            dos = {1000001.0,(c*-1.0)/b};
        }else if(b == 0){
            uno = {(c*-1.0)/a, -1000001.0};
            dos = {(c*-1.0)/a, 1000001.0};
        }else{
            uno = {-1000001.0, (c*(-1.0) - a*(-1000001.0))/b};
            dos = {1000001.0, (c*(-1.0) - a*(1000001.0))/b};
        }
        if(doIntersect(partida, llegada, uno, dos)){
            cont++;
        }
	}
	cout << cont<<endl;


    return 0;
}
