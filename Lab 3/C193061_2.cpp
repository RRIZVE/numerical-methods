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

const int mx = 100;
ld a[mx];
ld X[mx], del_Y[mx][mx];
ld i, j, k , x, y, z , n, m, c = 0, cnt = 0, d;
ld h, first_derivative, second_derivative, u, sum;

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


void solve()
{

	fraction();

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> X[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> del_Y[0][i];
	}

	cin >> x;

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			del_Y[i][j] = del_Y[i - 1][j + 1] - del_Y[i - 1][j];
		}
	}


	h = X[1] - X[0];

	u = (x - X[0]) / h;

	sum = 0.0;

	sum = del_Y[1][0] + (2 * u - 1) * (del_Y[2][0] / 2) + (3 * u * u - 6 * u + 2) * (del_Y[3][0] / 6) + (4 * u * u * u - 18 * u * u + 22 * u - 6) * (del_Y[4][0] / 24);

	first_derivative = sum / h;

	sum = del_Y[2][0] + (6 * u - 6) * (del_Y[3][0] / 6) + (12 * u * u - 36 * u + 22) * (del_Y[4][0] / 24);

	second_derivative = sum / (h * h);

	cout <<  first_derivative << endl;

	cout << second_derivative << endl;




















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