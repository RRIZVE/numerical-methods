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

const int mx = 1e6;
int a[mx];



ld f(ld x, ld y)
{
	return (x + y);
}




void solve()
{
	fraction();

	int i, j, n, m, z, c = 0, cnt = 0;
	string s;
	ld x, y, h;
	ld k1, k2, k3, k4, k;

	x = 0;
	y = 1;
	h = 0.1;

	k1 = f(x, y);
	k2 = f(x + (h / 2), y + ((k1 * h) / 2));
	k3 = f(x + (h / 2), y + ((k2 * h) / 2));
	k4 = f(x + h, k3 * h);

	y += ((k1 + 2 * k2 + 2 * k3 + k4) * (h / 6));
	x += h;

	cout << y << endl;


	k1 = f(x, y);
	k2 = f(x + (h / 2), y + ((k1 * h) / 2));
	k3 = f(x + (h / 2), y + ((k2 * h) / 2));
	k4 = f(x + h, k3 * h);

	y += ((k1 + 2 * k2 + 2 * k3 + k4) * (h / 6));
	x += h;

	cout << y << endl;
























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