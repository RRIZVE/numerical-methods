//********Bismillah-ir-Rahman-ir-Rahim***********\
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

#define MOD 1000000007
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a * b) % MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a + b) % MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while (p) { if (p & 1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

#define fraction() cout.unsetf(ios::floatfield); cout.precision(5); cout.setf(ios::fixed,ios::floatfield);

/*

  lagrange's inverse interpolation

  for(i....n)
  for(j....n)
  f=x[i];
  s=0;
  if(i!=j)
  {
	f = f * (Y - y[j]);
	s = s * (y[i] - y[j]);
  }
  ans = ans + (f / s);


*/

const int mx = 100;
ld x[mx];
ld y[mx];
ld U[mx];
int fac[mx];
int i, j, k , n, m, z, c = 0, cnt = 0;
ld sum = 0, ans = 0, xx, yy, X, Y;


ll allFactorial()
{
	fac[0] = 1;
	fac[1] = 1;
	for (int i = 2; i <= 100 ; i++)
	{
		fac[i] = modMul(fac[i - 1] , i);


	}

	return 0;
}


void solve()
{
	fraction();
	//allFactorial();

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> x[i];//1 2 3 4 5

	}
	for (i = 1; i <= n; i++)
	{
		cin >> y[i];//1 8 27 64 125

	}
	cin >> Y;

	for (i = 1; i <= n; i++)
	{
		ld f = x[i];
		ld s = 1.0;

		for (j = 1; j <= n; j++)
		{
			if (i != j)
			{
				f = f * (Y - y[j]);
				s = s * (y[i] - y[j]);
			}



		}
		ans = ans + (f / s);


	}

	cout << ans << endl;//5.64691








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