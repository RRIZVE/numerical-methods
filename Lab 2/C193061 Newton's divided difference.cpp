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

Newton's divided differenc

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
		cin >> x[i];//1 3 4 6 10

	}
	for (i = 0; i < n; i++)
	{
		cin >> y[i][0];//0 18 58 190 920

	}

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			y[j][i] = ((y[j][i - 1] - y[j + 1][i - 1]) / (x[j] - x[i + j]));
			// if (i == 1)
			// {
			// 	cout << j << i - 1 << "  " << j + 1 << i - 1 << "     " << j << "  " << i + j << endl;
			// 	cout << y[j][i - 1] << "  " << y[j + 1][i - 1] << "     " << x[j] << "  " << x[i + j] << endl;
			// 	cout << y[j][i] << endl << endl;
			// }

		}
	}

	for (int i = 0; i < n; i++)
	{
		cout <<  x[i] << "   ";

		for (int j = 0; j < n - i; j++)
		{
			cout <<  y[i][j] << "   ";
		}

		cout << endl;
	}

	cin >> val;//2.7

	// h = x[1] - x[0];
	// u = (val - x[0]) / h;



	for (i = 1; i < n; i++)
	{
		ld mul = 1;
		for (j = 0; j < i; j++)
		{
			mul = mul * (val - x[j]);


		}
		U[i] = mul;


	}

	sum = y[0][0];

	for (i = 1; i < n; i++)
	{
		sum = sum + (U[i] * y[0][i]);
	}

	cout << endl;
	cout << endl;
	cout << endl;

	cout << sum << endl;

	/*


	5
	1 3 4 6 10
	0 18 58 190 920
	2.7


	1.00000   0.00000   9.00000   10.33333   -0.33333   0.20767
	3.00000   18.00000   40.00000   8.66667   1.53571
	4.00000   58.00000   66.00000   19.41667
	6.00000   190.00000   182.50000
	10.00000   920.00000



	9.35463



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