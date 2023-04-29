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
#define EPS 1e-6

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

#define fraction() cout.unsetf(ios::floatfield); cout.precision(3); cout.setf(ios::fixed,ios::floatfield);


void solve()
{
	fraction();
	int n = 3;
	ld a[n][n];
	ld b[n];
	ld x[n];
	ld x_new[n];
	int i, j, k;
	ld sum, error;



	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
		cin >> b[i];
	}

	for (i = 0; i < n; i++)
	{
		x[i] = 0.0;
	}


	for (k = 1; k <= 100; k++)
	{

		for (i = 0; i < n; i++)
		{
			sum = b[i];
			for (j = 0; j < n; j++)
			{
				if (i != j)
				{
					sum -= a[i][j] * x[j];
				}
			}
			x_new[i] = sum / a[i][i];

		}


		error = 0.0;
		for (i = 0; i < n; i++)
		{
			error += fabs(x_new[i] - x[i]);
		}


		for (i = 0; i < n; i++)
		{
			x[i] = x_new[i];

			//cout << x[i] << endl;;


		}
		//cout << endl;

		if (error < EPS)
		{
			//cout << "YES" << endl;
			break;
		}
	}





	for (i = 0; i < n; i++)
	{
		cout << "x" << i + 1 << " = " << x[i] << endl;
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