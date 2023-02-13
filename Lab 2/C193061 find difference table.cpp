//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

/*
Write a program to find difference table for the above values.

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
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int mx = 100;
ld x[mx];
ld y[mx][mx];
ld U[mx];
int fac[mx];
int i, j, k , n, m, z, c = 0, cnt = 0;
ld sum = 0, h, u, val;


void solve()
{

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x[i];//1 2 3 4 5

	}
	for (i = 0; i < n; i++)
	{
		cin >> y[i][0];//1 8 27 64 125

	}

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
		}
	}

	ld ans ;

	for (int i = 0; i < n; i++)
	{
		cout <<  x[i] << "  ";

		for (int j = 0; j < n - i; j++)
		{
			cout <<  y[i][j] << "  ";
			ans = y[i][j];
		}

		cout << endl;
	}

	/*

	1  1  7  12  6  0
	2  8  19  18  6
	3  27  37  24
	4  64  61
	5  125




	*/





















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