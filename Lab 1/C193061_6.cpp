//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

/*
Write a program to find the root of the equation x3 - 6x + 4 = 0, correct to 3 decimal places, by using
Newton-Raphson method.

c193061
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
#define EPS 1e-10

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ld Pow(ld c, ld d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e6;
int a[mx];

ld f(ld x)
{
	return x * x * x - 6 * x + 4;

}
ld fPrime(ld x)
{
	return 3 * x * x - 6 ;
}

int ok = 0;

ld Newton_Raphson_method(ld x0)
{

	while (1)
	{
		double x1 = f(x0) / fPrime(x0);

		if (abs(x1) < EPS)
			break;


		x0 = x0 - x1;
	}


	return x0;


}


void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	fraction();


	ld x0 = 0;
	ld ans = Newton_Raphson_method(x0);

	//cout << x0 << "       " << ans << endl;
	//cout << f(ans) << endl;

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