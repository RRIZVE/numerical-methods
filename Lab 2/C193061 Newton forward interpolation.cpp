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

Newton's forward interpolation formula.

h=dif=x1-x0;
u=(x-x0)/h;
y=y0 + (u/1!) * del y0 + (u*(u-1)/2!) * del^2 y0 ....
del y0= f(x+1)-f(x);

*/

const int mx = 100;
ld x[mx];
ld y[mx][mx];
ld U[mx];
int fac[mx];
int i, j, k , n, m, z, c = 0, cnt = 0;
ld sum = 0, h, u, val;


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
	allFactorial();

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

	// for (int i = 0; i < n; i++)
	// {
	// 	cout <<  x[i] << " ";

	// 	for (int j = 0; j < n - i; j++)
	// 	{
	// 		cout <<  y[i][j] << " ";
	// 	}

	// 	cout << endl;
	// }

	cin >> val;//1.7

	h = x[1] - x[0];
	u = (val - x[0]) / h;



	for (i = 1; i < n; i++)
	{
		ld mul = u;
		for (j = 1; j < i; j++)
		{
			mul = mul * (u - j);


		}
		U[i] = mul;


	}

	sum = y[0][0];

	for (int i = 1; i < n; i++)
	{
		sum = sum + (U[i] * y[0][i]) / fac[i] ;
	}

	cout << sum << endl;// 4.91300







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