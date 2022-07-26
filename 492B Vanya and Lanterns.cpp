/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
/** ========================================**/

#include<bits/stdc++.h>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define asort(a)            sort(a + 1, a + n + 1)
#define dsort(a)            sort(a + 1, a + n + 1, greater<int>())
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;

ll b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
double a[N];
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp, mk;
set<ll>st;

int main()
{
    IO
    ll n;
    double l; cin >> n >> l;
    fr1(i, n) cin >> a[i];
    sort(a + 1, a + n + 1);
    double mx = max(a[1] - 0, l - a[n]), mx2 = 0;
    for(ll i = 1; i <= n; i++){
        mx2 = max(mx2, ((a[i] - a[i - 1]) / 2));
    }
    double ans = max(mx, mx2);
    cout << fixed << setprecision(10) << ans << endll;
    return 0;
}
