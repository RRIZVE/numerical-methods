//***Bishmillahir Rahmanir Raheem***//
#include<bits/stdc++.h>
using namespace std;
#define  fast       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  ll         long long
#define  ull        unsigned long long
#define  ld         long double
#define  inf        1000000000000000000
#define  pb         push_back
#define  mkp         make_pair
#define  sz         size()
#define  nl         "\n"
#define  ff               first
#define  ss               second
#define  mem(a,x)        memset(a,x,sizeof(a))
#define test  ll t;cin>>t; while(t--){solve();}
#define  YES        cout << "YES" << nl;
#define  NO        cout << "NO" << nl;
#define  yes        cout << "Yes" << nl;
#define  no        cout << "No" << nl;
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define rev(v)              reverse(v.begin(),v.end())
#define srt(v)              sort(v.begin(),v.end())
#define grtsrt(v)           sort(v.begin(),v.end(),greater<int>())
#define mnv(v)              *min_element(v.begin(),v.end())
#define mxv(v)              *max_element(v.begin(),v.end())
#define countv(v,a)         count(v.begin(),v.end(),a)

#define  md         1000000007
#define  pi         acos(-1.0)
#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
#define  Max3(a,b,c) max(a,max(b,c))
#define  Min3(a,b,c) min(a,min(b,c))

#define pii      pair<int,int>
#define pll      pair<ll,ll>
#define vi       vector<int>
#define vll      vector<ll>
#define vc       vector<char>
#define vs       vector<string>
#define vpii     vector< pair<int,int> >
#define vpll     vector< pair<ll,ll> >
#define pip      pair< int,pii >
#define ppi      pair< pii,int >
#define sei      set<int>
#define usei     unordered_set<int>
#define ses      set<string>
#define sepii    set< pair<int,int> >
#define di       deque<int>
#define li       list<int>
#define sti      stack<int>
#define qi       queue<int>
#define pqi      priority_queue<int>
#define mpii      map<int,int>
#define mpll      map<ll,ll>
#define umii     unordered_map<int,int>
#define vit      vector<int>::iterator
#define mit      map<int,int>::iterator
#define sit      set<int>:: iterator
#define umap     unordered_map
#define uset     unordered_set
#define PQ       priority_queue

ll Pow(ll c, ll d) {return d == 0 ? 1 : c * Pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
//ceil--(a+b-1)/b
//pair--p.pb({x,y});
//string to int
//for (int i = 0; i<s.size(); ++i){x = x * 10 + (s[i] - 48);}
//intTostring str=to_string(n);
//stringToint n=stoi(str);
//strToll n=stoll(str,nullptr,10);
void iofun(){
    #ifndef ONLINE_JUDGE
    freopen("F:/My Code/input.txt", "r", stdin);
    freopen("F:/My Code/output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n;
    cin >> n;
    int x[n+5],y,del_y[n+5][n+5];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> del_y[0][i];
    }
    long double X,h,first_derivative,second_derivative;
    cin >> X;
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n-i; ++j)
        {
            del_y[i][j] = del_y[i-1][j+1] - del_y[i-1][j];
        }
    }
    h = x[1] - x[0];
    long double cal=0,d;
    for (int i = 1; i < n; ++i)
    {
        if(i%2==0)
        {
            cal-=(del_y[i][0]/i);
        }
        else
        {
            cal+=(del_y[i][0]/i);
        }
    }
    first_derivative = cal / h;
    cal = del_y[2][0]-del_y[3][0]+(11*del_y[4][0]/12);
    second_derivative = cal / (h*h);

    cout << "First Derivative = " << setprecision(3) << fixed << first_derivative << "\n";
    cout << "Second Derivative = " << setprecision(3) << fixed << second_derivative << "\n";

}
int main()
{
    fast;
    iofun();
    //test;
    solve();
    return 0;
}