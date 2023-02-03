//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

/*

Write a program to evaluate a polynomial f(x) = x3- 2x2+ 5x + 10 by using Horner's rule x = 5.

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

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e6;
int a[mx];
int n;

ll Horners_rule_evaluate(int Horners_rule_x)
{
	ll ans = a[0];

	for (int i = 1; i < n; i++)
	{
		ans = ans * Horners_rule_x;
		ans = ans + a[i];


	}

	return ans;
}


void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0, Horners_rule_x;
	string s;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];//1 -2 5 10

	}
	cin >> Horners_rule_x;//5

	cout << Horners_rule_evaluate(Horners_rule_x);























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