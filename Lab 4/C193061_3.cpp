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

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{

	fraction();

	int i, n;
	cin >> n;

	ld a, b;

	ld u, v, w, x, loga, bloge, y, z, X[n + 10], Y[n + 10];

	u = 0.0;
	v = 0.0;
	w = 0.0;
	x = 0.0;

	for (i = 1; i <= n; i++)
	{
		cin >> X[i] >> Y[i];
	}

	for (i = 1; i <= n; i++)
	{
		u += X[i];
		v += log10(Y[i]);
		w += (X[i] * X[i]);
		x += (X[i] * log10(Y[i]));
	}

	loga = ((v * w) - (u * x)) / ((n * w) - (u * u));

	bloge = ((n * x) - (u * v)) / ((n * w) - (u * u));

	a = pow(10, loga);

	b = bloge / log10(exp(1));

	cout << a << endl;
	cout << b << endl;


















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