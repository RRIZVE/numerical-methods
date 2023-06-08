//2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    
    float p[n], q[n], a[50][50], b[50][50];
    float x, xx, xxx, xxxx, y, xy, xxy, z, x1, x2, x3, y1, y2, y3, z1, z2, z3, det, det1, det2, det3, s, u, t;

    x = xx = xxx = xxxx = y = xy = xxy = 0.0;

    for(int i = 0; i < n; i++)
    {
    	cin >> p[i] >> q[i];
    }

    for(int i = 0; i < n; i++)
    {
    	x += p[i];
    	xx += (p[i] * p[i]);
    	xxx += (p[i] * p[i] * p[i]);
    	xxxx += (p[i] * p[i] * p[i] * p[i]);
    	y += q[i];
    	xy += (p[i] * q[i]);
    	xxy += (p[i] * p[i] * q[i]);
    }

	a[0][0] = n; a[0][1] = x; a[0][2] = xx; a[0][3] = y;
	a[1][0] = x; a[1][1] = xx; a[1][2] = xxx; a[1][3] = xy;
	a[2][0] = xx; a[2][1] = xxx; a[2][2] = xxxx; a[2][3] = xxy;


    x=((a[1][1]*a[2][2])-(a[2][1]*a[1][2]));
    y=((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
    z=((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));

    x1=((a[1][1]*a[2][2])-(a[2][1]*a[1][2]));
    y1=((a[1][3]*a[2][2])-(a[2][3]*a[1][2]));
    z1=((a[1][3]*a[2][1])-(a[2][3]*a[1][1]));

    xx=((a[1][3]*a[2][2])-(a[2][3]*a[1][2]));
    y2=((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
    z2=((a[1][0]*a[2][3])-(a[2][0]*a[1][3]));


    xxx=((a[1][1]*a[2][3])-(a[2][1]*a[1][3]));
    y3=((a[1][0]*a[2][3])-(a[2][0]*a[1][3]));
    z3=((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));

    //determinant
    det=((a[0][0]*x)-(a[0][1]*y)+(a[0][2]*z));
    det1=((a[0][3]*x1)-(a[0][1]*y1)+(a[0][2]*z1));
    det2=((a[0][0]*xx)-(a[0][3]*y2)+(a[0][2]*z2));
    det3=((a[0][0]*xxx)-(a[0][1]*y3)+(a[0][3]*z3));

    s=((det1)/((float)det));
    u=((det2)/((float)det));
    t=((det3)/((float)det));

    //output
	cout<<s<<endl<<u<<endl<<t<<endl;

    return 0;
}

/*

4
2 1.4
4 2.0
6 2.4
8 2.8

*/
