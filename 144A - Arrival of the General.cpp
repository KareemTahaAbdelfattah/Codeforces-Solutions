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

ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp, mk;
set<ll>st;

int main()
{
    IO
    int n, mx = 0, mn = 100, pl_mx = 0, pl_mn = 0; cin >> n;
    fr1(i, n){
        cin >> a[i];
        if(mx < a[i]){
            mx = a[i];
            pl_mx = i;
        }
        if(mn >= a[i]){
            mn = a[i];
            pl_mn = i;
        }
    }
    int ans = (pl_mx - 1) + (n - pl_mn);
    if(pl_mx > pl_mn) ans -= 1;
    cout << ans;
    return 0;
}
