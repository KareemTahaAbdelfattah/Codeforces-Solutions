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

ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp, mk;
set<ll>st;

int main()
{
    IO
    ll n, s, ans = 0; cin >> n >> s;
    ll l = 1, r = n, m;
    while(l <= r){
        ll sum = 0;
        m = (l + r) / 2;
        ll ne = m;
        while(ne != 0){
            sum += ne % 10;
            ne /= 10;
        }
        if(m - sum >= s){
            ans = n - m + 1;
            r = m - 1;
        }
        else l = m + 1;
    }
    cout << ans;
    return 0;
}
