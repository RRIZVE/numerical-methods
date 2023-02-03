//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

/*

Write a program to find the root of the equation x3 - x + 2 = 0, correct to 3 decimal places, by using
false position method

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
#define EPS 1e-3

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e6;
double func(ld x)
{
	return x * x * x  - x  + 2;
}


ld regulaFalsi(ld a, ld b)
{
	fraction();

	ld c = a;

	for (int i = 0; i < mx; i++)
	{

		c = a - (func(a) * (b - a)) / (func(b) - func(a));

		if (fabs(b - a) < EPS)
		{
			break;
		}
		else if (func(c)*func(a) < 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
	}
	return c;
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	for (i = 1; i <= 10; i++)
	{
		ld a, b;
		
		cin >> a >> b;//-100 100
		if (func(a) * func(b) >= 0)
		{
			continue;
		}
		else
		{
			cout << "ans     " << regulaFalsi(a, b) << endl;;
			break;

		}
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