//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

/*

Write a program to find the root of the equation x3 – 5x2 –29 = 0, correct to 3 decimal places, by
using secant method.

C193061

*/

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 0.0005

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e6;
double f(ld x)
{
	return  (x * x * x)  - (5 * x * x) - 29;
}


ld Secant_Method(ld x1, ld x2)
{
	fraction();

	ld root;

	for (int i = 0; i < mx; i++)
	{
		ld f1 = f(x1);
		ld f2 = f(x2);
		ld x3 = ((f2 * x1) - (f1 * x2)) / (f2 - f1);



		if (fabs(x3 - x2) >= EPS)
		{
			x1 = x2;
			f1 = f2;
			x2 = x3;
			f2 = f(x3);

		}
		else
		{
			root = x3;
			break;
		}

	}
	return root;
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	ld a, b;

	cin >> a >> b;//1 2

	cout << "ANS     " << Secant_Method(a, b) << endl;//5.847980






















}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}