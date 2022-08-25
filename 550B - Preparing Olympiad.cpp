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
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define asort(a)            sort(a + 1, a + n + 1)
#define dsort(a)            sort(a + 1, a + n + 1, greater<int>())
#define LightOn(n, k)       ((n) | (1<<k))
#define Lightoff(n, k)      ((n) & (~(1<<k)))
#define IsOn(n, k)          ((n>>k) & 1)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>s;

string GetBinary(ll n){
    string ret = "";
    for(ll i = 31; i >= 0; i--) ret += to_string(IsOn(n, i));
    return ret;
}
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution

int main()
{
    IO
    ll n, l, r, x, ans = 0; cin >> n >> l >> r >> x;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll subset = 0; subset < (1<<n); subset++){
        ll On = 0, sum = 0, mx = 0, mn = 100000000;
        for(ll k = 0; k < n; k++){
            if(IsOn(subset, k)){
                On++;
                sum += a[k];
                mx = max(mx, a[k]);
                mn = min(mn, a[k]);
            }
        }
        if(On >= 2){
            if((sum >= l) && (sum <= r) && (mx - mn >= x)) ans++;
        }
    }
    cout << ans << endll;
    return 0;
}
