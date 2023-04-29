//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

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
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}



double f(double x)
{
	return exp(sin(x));
}

double simpson(double a, double b, int n)
{
	double h = (b - a) / n;
	double sum = 0.0;

	for (int i = 0; i <= n; i++)
	{
		double x = a + i * h;

		if (i == 0 || i == n)
		{
			sum += f(x);
		}
		else if (i % 2 == 1)
		{
			sum += 4 * f(x);
		} else {
			sum += 2 * f(x);
		}
	}

	return (h / 3.0) * sum;
}


void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	ld a = 0.0;
	ld b = pi / 2.0;
	n = 10;
	ld area = simpson(a, b, n);

	cout << "ANS : " << area << endl;






















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