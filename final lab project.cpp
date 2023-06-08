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

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1000;
ld x[mx];
ld Y[mx][mx];
ld y[mx];
ld U[mx];
ll fac[mx];
ll i, j, k , n, m, c = 0, cnt = 0;
ld sum = 0, h, u, val;
int cnt1 = 0;
int cnt2 = 0;
int cnt3 = 0;



// Structure to represent a data point (x, y)
struct DataPoint
{
	ld x;
	ld y;
};

// Function to perform spline interpolation
ld splineInterpolation(const std::vector<DataPoint>& data, ld xi)
{
	ll n = data.size();

	std::vector<ld> h(n), alpha(n), l(n + 1.0), mu(n + 10), z(n + 10);
	std::vector<ld> c(n + 10), b(n + 10), d(n + 10);

	for (ll i = 0; i < n - 1; i++)
	{
		cnt3++;
		h[i] = data[i + 1].x - data[i].x;
		alpha[i] = (3.0 / h[i]) * (data[i + 1].y - data[i].y);
	}

	l[0] = 1.0;
	mu[0] = z[0] = 0.0;

	for (ll i = 1; i < n - 1; i++)
	{
		cnt3++;
		l[i] = 2.0 * (data[i + 1].x - data[i - 1].x) - h[i - 1] * mu[i - 1];
		mu[i] = h[i] / l[i];
		z[i] = (alpha[i] - h[i - 1] * z[i - 1]) / l[i];
		cnt3++;
	}

	l[n - 1] = 1.0;
	z[n - 1] = c[n] = 0.0;

	for (ll j = n - 2; j >= 0; j--)
	{
		cnt3++;
		cnt3++;
		cnt3++;
		c[j] = z[j] - mu[j] * c[j + 1];
		b[j] = (data[j + 1].y - data[j].y) / h[j] - h[j] * (c[j + 1] + 2.0 * c[j]) / 3.0;
		d[j] = (c[j + 1] - c[j]) / (3.0 * h[j]);
	}

	// Find the interval where xi lies
	ll interval = 0;
	for (ll i = 0; i < n - 1; i++) {
		cnt3++;
		if (xi >= data[i].x && xi <= data[i + 1].x)
		{
			cnt3++;
			interval = i;
			break;
		}
	}

	// Compute interpolated value using the spline equation
	ld dx = xi - data[interval].x;
	ld interpolatedValue =
	    data[interval].y + b[interval] * dx + c[interval] * dx * dx + d[interval] * dx * dx * dx;

	return interpolatedValue;
}




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
	std::vector<DataPoint> data;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		ld z;
		ld x1, y1;
		cin >> z;
		x1 = x[i];
		y1 = z;
		Y[i][0] = z;
		y[i] = z;
		data.pb({x1, y1});

	}

	cin >> val;

	int xx;
	xx = val;

	cout << "Year   :  " << xx << endl;



	//................
	// lagrange's inverse interpolation



	ld p;
	ld ans1 = 0.0;



	for (i = 0; i < n; i++)
	{
		p = 1;
		for (j = 0; j < n; j++)
		{
			if (i != j)
			{
				cnt1++;
				p = p * (val - x[j]) / (x[i] - x[j]);
			}
		}
		ans1 = ans1 + p * y[i];
	}


	//cout << ans1 << endl;;


	//..............









	//.............

	//Newton's divided difference

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			cnt2++;
			Y[j][i] = ((Y[j][i - 1] - Y[j + 1][i - 1]) / (x[j] - x[i + j]));

		}
	}



	for (i = 1; i < n; i++)
	{
		ld mul = 1;
		for (j = 0; j < i; j++)
		{
			cnt2++;
			mul = mul * (val - x[j]);


		}
		U[i] = mul;


	}

	ld ans2 = Y[0][0];

	for (i = 1; i < n; i++)
	{
		cnt2++;
		ans2 = ans2 + (U[i] * Y[0][i]);
	}



	//cout << ans2 << endl;



	//.................





	//..............


	//spline interpolation

	ld  ans3 = splineInterpolation(data, val);


	//cout <<  ans3 << endl;






	//....................

	cout << endl;
	cout << endl;


	cout << "Method" << "    lagrange's inverse interpolation    Newton's divided difference       Spline interpolation " << endl  ;
	cout << endl;
	cout << "People" << "       " << ans1 << "                 " << ans2 << "               " << ans3 << endl;
	cout << endl;
	cout << "Iterator" << "       " << cnt1 << "                                    " << cnt2 << "                              " << cnt3 << endl;








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