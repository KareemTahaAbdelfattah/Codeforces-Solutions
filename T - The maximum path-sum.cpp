/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
 ** @brief: Problem Solving solutions
/** ========================================**/

#include<bits/stdc++.h>
#include<iterator>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define LightOn(n, k)       (n | (1<<k))
#define Lightoff(n, k)      (n & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5;
const double PI = 3.14;
const double Prox = 1e-7;
map<char, ll>mp1, mp2;
ll a[N], b[N];
set<ll>s;

ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}
// right shift n = num / pow(2, n);
// left shift n = num * pow(2, n);
// sleep(micro second); for slow execution
ll rec(ll n, ll m, ll start, ll start2, ll c[10][10]);
int main()
{
    IO
    ll n , m; cin >> n >> m;
    ll a1[10][10];
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin >> a1[i][j];
    cout << rec(n, m, 0, 0, a1);
    return 0;
}

ll rec(ll n, ll m, ll start, ll start2, ll c[10][10]){
    if(start == n - 1 && start2 == m - 1) return c[start][start2];
    if(start < n - 1 && start2 < m - 1)  return c[start][start2] + max(rec(n, m, start, start2 + 1, c),rec(n, m, start + 1, start2, c));
    else if(start == n - 1) return c[start][start2] + rec(n, m, start, start2 + 1, c);
    else return c[start][start2] + rec(n, m, start + 1, start2, c);
}
