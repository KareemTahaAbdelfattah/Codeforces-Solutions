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
ll rec(ll a[], ll m, ll num, ll n, ll beging);
int main()
{
    IO
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < n; i++) cin >> a[i];
    if (rec(a, m, a[0], n, 1) >= 1) cout << "YES";
    else cout << "NO";
    return 0;
}

ll rec(ll a[], ll m, ll num, ll n, ll beging){
    if(beging >= n && num == m) return 1;
    if(beging >= n && num != m) return 0;
    return rec(a, m, num + a[beging], n, beging + 1) + rec(a, m, num - a[beging], n, beging + 1);
}



