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
#define EPS 0.001

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e6;
ld a, b, difX = 0.001, x1, x2, f1, f2, x0, f0, ans;

ld f(ld x)
{
	return (x * x * x - 6 * x + 4);
}

void solve()
{
	fraction();

	int i, j, k , n, m, c = 0, cnt = 0;
	string s;

	cin >> a >> b;//-10 10

	// x1 = a;
	// x2 = x1 + difX;

	// f1 = f(x1);
	// f2 = f(x2);

	// if ((f1 * f2) > 0)
	// {
	// 	cout << "Try Again" << endl;
	// 	return;
	// }

	for (i = 1; i <= mx; i++)
	{
		x1 = a;
		x2 = x1 + difX;

		f1 = f(x1);
		f2 = f(x2);

		if ((f1 * f2) > 0)
		{
			if (x2 < b)
			{
				a = x2;
			}

		}
		else
		{
jump:

			x0 = (x1 + x2) / 2.0;

			f0 = f(x0);

			if (f1 * f2 < 0)
			{
				x2 = x0;
			}
			else
			{
				x1 = x0;
				f1 = f0;

			}

			if (fabs(x2 - x1) < EPS)
			{
				ans = (x1 - x2) / 2.0;
				//cout << ans << endl;

				if (x2 < b)
				{
					a = x2;
				}

			}
			else
			{
				goto jump;
			}


		}





	}

	cout << "Final    :  " << endl;
	cout << ans << endl;






















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