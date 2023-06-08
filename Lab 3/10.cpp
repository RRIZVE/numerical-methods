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



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	cin >> n;
	m = n + 1;
	ld a[n + 10][m + 10];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];

		}


	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			ld factor = a[j][i] / a[i][i];
			for (k = i; k <= n; k++)
			{
				a[j][k] = a[j][k] - factor * a[i][k];
			}
		}
	}


	for (i = n - 1; i >= 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			ld factor = a[j][i] / a[i][i];

			for (k = i; k <= n; k++)
			{
				a[j][k] = a[j][k] - factor * a[i][k];
			}
		}
	}


	for (i = 0; i < n; i++)
	{
		double factor = a[i][i];
		for (j = i; j <= n; j++)
		{
			a[i][j] = a[i][j] / factor;
		}
	}



	for (i = 0; i < n; i++)
	{
		cout << a[i][n] << endl;
	}



















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