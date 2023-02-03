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
string s;

void go(int j)
{
	for (int i = j; i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '8')
		{
			s[i]++;
			break;
		}
		else
		{
			if (s[i] != '.')
			{
				s[i] = '0';
			}
		}



	}
}





void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, limit;

	cin >> s;
	cin >> limit;//digit;
	int len = s.size();
	c = 0;
	for (i = 0; i < len; i++)
	{
		if (cnt == limit)
		{
			//cout << "YES    " << i << "    " << s[i] << endl;
			int t1 = s[i - 1] - '0';//aga
			int t2 = s[i] - '0';//pora

			if (t2 < 5)
			{

			}
			else if (t2 == 5)
			{
				if (t1 % 2 == 0)
				{

				}
				else
				{
					go(i - 1);
				}

			}
			else
			{
				go(i - 1);
			}

			break;


		}
		else if (c == 0 && s[i] >= '1' && s[i] <= '9')
		{
			c = 1;
			cnt++;
		}
		else if (c == 1 && s[i] >= '0' && s[i] <= '9')
		{

			cnt++;
		}




	}

	cnt = 0;
	c = 0;
	for (i = 0; i < len; i++)
	{
		if (cnt == limit)
			break;
		else if (c == 0 && s[i] >= '1' && s[i] <= '9')
		{
			c = 1;
			cout << s[i];
			cnt++;
		}
		else if (c == 1 && s[i] >= '0' && s[i] <= '9')
		{
			cout << s[i];
			cnt++;
		}
		else
		{
			cout << s[i];
		}



	}
	cout << endl;

	/*

	1.6583
	4


	1.658

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