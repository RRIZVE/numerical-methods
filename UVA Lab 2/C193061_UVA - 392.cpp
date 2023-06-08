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

const int mx = 1e6;
int a[mx];



void solve()
{


	int n[9];

	while (cin >> n[8])
	{
		for (int i = 7; i >= 0; i--) cin >> n[i];

		bool first = true;

		for (int i = 8; i >= 0; i--)
		{
			if (n[i] != 0)
			{
				if (first) {
					if (n[i] < 0) { cout << "-"; n[i] = -n[i]; }
					if (i == 0 || n[i] != 1)
						cout << n[i];
					if (i > 1)
						cout << "x^" << i;
					else if (i == 1)
						cout << "x";
					first = false;
				}
				else
				{
					if (n[i] < 0) { cout << " - "; n[i] = -n[i]; }
					else cout << " + ";
					if (i == 0 || n[i] != 1)
						cout << n[i];
					if (i > 1)
						cout << "x^" << i;
					else if (i == 1)
						cout << "x";
				}
			}
		}

		if (first) cout << "0";

		cout << endl;
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