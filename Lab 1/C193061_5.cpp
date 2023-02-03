//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

/*
5
Write a program to find the root of the equation x5 + 3x2 - 10 = 0, correct to 3 decimal places, by the
using fixed point method.

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
ld a, b;

ld g(ld x)
{
	return sqrt((10.0) / (x * x * x + 3));
}


void solve()
{

	fraction();

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	cin >> a;

	b = g(a);

	for (i = 1; i <= mx; i++)
	{
		if (fabs(b - a) < EPS)
		{
			c = 1;
			break;
		}

		a = b;

		b = g(a);

	}
	if (c == 1)
	{
		cout << "ANS   : " << endl;
		cout << b << endl;
	}
	else
	{
		cout << "Try Again" << endl;
	}

	/*

	100

	ans == 1.35213

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