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
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 10;
int n, m;

ld det(int mat[10][10])
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mat[i][j] << " ";

		}
		cout << endl;
	}
	cout << endl;
	int det = 0.0;
	for (int i = 0; i < 3; i++)
	{
		det = det + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
	}

	return det;
}

void solve()
{
	fraction();

	int i, j, k , x, y, z, cnt = 0;
	string s;
	int A[mx][mx];
	int B[mx][mx];
	int a[mx][mx];
	int b[mx][mx];
	int c[mx][mx];

	cin >> n >> m;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> A[i][j];
			a[i][j] = A[i][j];
			b[i][j] = A[i][j];
			c[i][j] = A[i][j];

		}
		cin >> B[0][i];


	}


	ld d = det(A);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0)
			{
				a[i][j] = B[0][i];
			}
			if (j == 1)
			{
				b[i][j] = B[0][i];
			}
			if (j == 2)
			{
				c[i][j] = B[0][i];
			}



		}


	}
	ld da = det(a);
	ld db = det(b);
	ld dc = det(c);



	// for (i = 0; i < n; i++)
	// {
	// 	for (j = 0; j < m; j++)
	// 	{
	// 		cout << A[i][j] << " ";

	// 	}
	// 	cout << endl;
	// }

	// cout << endl;
	// cout << endl;
	// cout << endl;


	// for (i = 0; i < n; i++)
	// {
	// 	for (j = 0; j < m; j++)
	// 	{
	// 		cout << c[i][j] << " ";

	// 	}
	// 	cout << endl;
	// }
	// cout << endl;

	//Unique solution: 0.250 1.000 4.000


	cout << da / d << endl;
	cout << db / d << endl;
	cout << dc / d << endl;

























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