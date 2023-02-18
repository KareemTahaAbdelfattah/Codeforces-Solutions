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
ll rec(ll a[100][100], ll n, ll m, ll w);
int main()
{
    IO
    ll a1[100][100];
    ll n, w; cin >> n >> w;
    for(ll i = 0; i < n; i++) for (ll j = 0; j < 2; j++) cin >> a1[i][j];
    cout << rec(a1, n - 1, w, 0);
    return 0;
}

ll rec(ll a[100][100], ll n, ll m, ll w){
    if(n < 0) return 0;
    if(w + a[n][0] > m) return rec(a, n - 1, m, w);
    return max(a[n][1] + rec(a, n - 1, m, w + a[n][0]), rec(a, n - 1, m, w));
}



