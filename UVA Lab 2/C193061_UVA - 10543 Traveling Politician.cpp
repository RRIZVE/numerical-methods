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

const int MX = 100;
bool vis[MX];
vector<int> adj[MX];
int n, m, k;
int dp[100][100];

int dfs ( int u , int cnt)
{
	if (u == n - 1 && (cnt + 1 >= k && cnt + 1 <= 20))
	{
		return 1;
	}
	if (cnt > 20)
	{
		return 100;
	}

	int &ret = dp[u][cnt];

	if (ret != -1)
	{
		return ret;
	}

	ret = 100;

	for ( auto v : adj[u] )
	{
		if ( v != u)
		{

			ret = min(ret, 1 + dfs(v, cnt + 1));
		}
	}

	return ret;
}



void solve()
{

	int i, j, x, y, z, c = 0, cnt = 0;
	string s;

	while (cin >> n >> m >> k)
	{

		if (n == 0 && m == 0 && k == 0)
		{
			break;
		}



		for ( int i = 0; i < 70; i++ )
			adj[i].clear();

		memset(dp, -1, sizeof(dp));

		for (i = 1; i <= m; i++)
		{
			cin >> x >> y;

			adj[x].pb(y);


		}

		int ans = dfs(0, 0);

		if (ans > 20 || ans < k)
		{
			cout << "LOSER" << endl;
		}
		else
		{
			cout << ans << endl;
		}
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