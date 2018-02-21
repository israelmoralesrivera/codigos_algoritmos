#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define a >>

int main()
{
	double r,x,y,x1,y1;

	cin a r a x a y a x1 a y1;

	double dis = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
	dis = ceil(dis/(2.0*r));

	cout << dis << endl;


    return 0;
}
